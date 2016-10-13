#include "libft.h"

char *ft_strcat(char *dst, const char *src)
{
  int i;
  int j;

  i = 0;
  while (dst[i])
    i++;
  j = 0;
  while (src[j])
  {
    dst[i + j] = src[j];
    j++;
  }
  dst[i + j] = '\0';
  return (dst);
}
