#include "get_next_line.h"

int main(int argc, char **argv)
{
  int fd;
  char *line;
  int ret;

  (void)argc;
  fd = open(argv[1], O_RDONLY);
  line = NULL;
  while ((ret = get_next_line(fd, &line)))
  {
    ft_putendl(line);
    free(line);
    line = NULL;
  }
  close(fd);
  return (0);
}
