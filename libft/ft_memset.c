#include "libft.h"

void  *ft_memset(void *b, int c, size_t len)
{
  unsigned char *s;

  s = b;
  while (len > 0)
  {
    *s++ = (unsigned char)c;
    len--;
  }
  return (b);
}
