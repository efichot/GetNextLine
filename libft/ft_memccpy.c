#include "libft.h"

void  *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  unsigned char *s1;
  unsigned const char *s2;
  unsigned int i;

  s1 = dst;
  s2 = src;
  i = 0;
  while (i < n)
  {
    s1[i] = s2[i];
    if (s2[i] == (unsigned char)c)
      return (s1 + i + 1);
    i++;
  }
  return (NULL);
}
