#include "./includes/libft.h"

char *ft_strnew(size_t size)
{
  char *ret;

  ret = (char *)ft_memalloc(sizeof(*ret) * size + 1);
  if (!ret)
    return (NULL);
  return (ret);
}
