#include "libft.h"

void  ft_bzero(void *s, size_t n)
{
  unsigned char *tmp;

  tmp = s;
  while (n > 0)
  {
    *tmp++ = '\0';
    n--;
  }
}
