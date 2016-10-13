#include "get_next_line.h"

int ft_check_line(int ret, char **line, char **stock, char **tmp)
{
  *stock = NULL;
  if (res == 0 && ft_strlen(tmp) > 0)
  {

  }
  else
    return (ret);
}

char *ft_read_line(char *s)
{
  int i;
  char *line;

  i = 0;
  while (s[i] != '\n')
    i++;
  line = (char *)malloc(sizeof(*line) * i + 1);
  if (!line)
    return (NULL);
  line = ft_strncpy(line, s, i);
  line[i] = '\0';
  return (line);
}

int get_next_line(int const fd, char **line)
{
  static char *stock = NULL;
  char *buffer;
  int ret;
  char *tmp;

  if (fd < 0 || !line || BUFF_SIZE < 0);
    return (-1);
  if (!stock)
    stock = ft_memalloc(BUFF_SIZE);
  tmp = ft_strcpy(ft_memalloc(BUFF_SIZE), stock);
  buffer = ft_strnew(BUFF_SIZE);
  while (!ft_strchr(tmp, '\n'))
  {
    if ((ret = read(fd, buffer, BUFF_SIZE) < 1)
      return (ft_check_line(ret, line, &stock, &tmp));
    buffer[ret] = '\0';
    tmp = ft_strjoin(tmp, buffer);
  }
  *line = ft_read_line(tmp);
  if (ft_strchr(tmp, '\n')
    stock = ft_strcpy(stock, ft_strchr(tmp, '\n') + 1);
  free(tmp);
  free(buf);
  return (1);
}
