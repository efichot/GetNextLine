#include "get_next_line.h"

int ft_read_failed(int ret, char **stock)
{
  ft_putendl("Read() failed");
  ft_strdel(stock);
  return (ret);
}

int		ft_eof(char **line, char **stock)
{
	if (ft_strlen(*stock) > 0)
	{
		*line = *stock;
		ft_strdel(stock);
	}
  return (0);
}

int		get_next_line(int const fd, char **line)
{
	static char		*stock = NULL;
	int				ret;
	char			*buffer;
	char			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1 || BUFF_SIZE > 10000000)
		return (-1);
	buffer = ft_strnew(BUFF_SIZE);
	stock = (stock == NULL) ? ft_memalloc(BUFF_SIZE) : stock;
	while (!(ft_strchr(stock, '\n')))
	{
		if (!(ret = read(fd, buffer, BUFF_SIZE)))
			return (ft_eof(line, &stock));
    if (ret == -1)
      return (ft_read_failed(ret, &stock));
    buffer[ret] = '\0';
		stock = ft_strjoin(stock, buffer);
	}
	*line = ft_strsub(stock, 0, ft_strchrpos(stock, '\n'));
	if (ft_strchr(stock, '\n'))
  {
    tmp = ft_strdup(stock);
    ft_strdel(&stock);
    stock = ft_strsub(tmp, ft_strchrpos(tmp, '\n') + 1, ft_strlen(tmp));
    free(tmp);
  }
	free(buffer);
	return (1);
}
