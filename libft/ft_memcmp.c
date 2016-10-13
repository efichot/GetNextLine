#include "libft.h"

int ft_memcmp(const void *s1,const void *s2, size_t n)
{
  unsigned int i;
  unsigned const char *ps1;
  unsigned const char *ps2;

  ps1 = s1;
  ps2 = s2;
  i = 0;
  while (i < n && (ps1 || ps2))
  {
    if (ps1[i] != ps2[i])
      return ((int)(ps1[i] - ps2[i]));
    i++;
  }
  return (0);
}
