#include "./includes/libft.h"

void *ft_memalloc(size_t size)
{
  void *ret;

  ret = (void *)malloc(sizeof(*ret) * size);
  if (!ret)
    return (NULL);
  ft_bzero(ret, size);
  return (ret);
}
