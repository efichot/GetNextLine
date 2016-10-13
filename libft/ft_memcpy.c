#include "libft.h"

void  *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned int i;

  i = 0;
  while (i < n)
  {
    ((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
    i++;
  }
  return (dst);
}
