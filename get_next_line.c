#include "get_next_line.h"

int ft_open_failed(int ret, char **stock)
{
  ft_putendl("Close() failed");
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
  return (1);
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
      return (ft_open_failed(ret, &stock));
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
//
// int gnl_check_stock(char **stock, char **line)
// {
//   char *tmp;
//
//   if ((tmp = ft_strchr(*stock, '\n')))
//   {
//     *line = ft_strsub(*stock, 0, ft_strchrpos(*stock, '\n'));
//     ft_strdel(stock);
//     *stock = ft_strdup(tmp + 1);
//     tmp = NULL;
//     return (1);
//   }
//   return (0);
// }
//
// int gnl_check_read(char *buffer, char **stock, char **line)
// {
//   char *tmp;
//
//   if ((tmp = ft_strchr(buffer, '\n')))
//   {
//     *line = ft_strjoin(*stock, ft_strsub(buffer, 0, ft_strchrpos(buffer, '\n')));
//     ft_strdel(stock);
//     *stock = ft_strdup(tmp);
//     tmp = NULL;
//     free(buffer);
//     return (1);
//   }
//   else
//     return (0);
// }
//
// int get_next_line(int const fd, char **line)
// {
//   static char *stock = NULL;
//   char *buffer;
//   int ret;
//
//   ft_strdel(line);
//   stock = (stock == NULL) ? ft_strnew(BUFF_SIZE) : stock;
//   if (gnl_check_stock(&stock, line))
//     return (1);
//   buffer = ft_strnew(BUFF_SIZE);
//   while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
//   {
//     buffer[ret] = '\0';
//     if (gnl_check_read(buffer, &stock, line))
//       return (1);
//     stock = ft_strjoin(stock, buffer);
//   }
//   if (ret == -1)
//     return (-1);
//   if (!ft_strlen(stock))
//     return (0);
// }
