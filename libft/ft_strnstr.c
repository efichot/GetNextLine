#include "libft.h"

char   *ft_strnstr(const char *str, const char *substring, size_t len)
{
  unsigned int i;
  unsigned int j;

  i = 0;
  if (substring[0] == '\0')
    return ((char *)str);
  while (i < len && str[i])
  {
    j = 0;
    if (str[i + j] == substring[j])
    {
      while (str[i + j] == substring[j] && str[i + j] && substring[j] && i + j < len)
        j++;
      if (substring[j] == '\0')
        return ((char *)str + i);
    }
    i++;
  }
  return (NULL);
}
