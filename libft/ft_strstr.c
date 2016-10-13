#include "libft.h"

char   *ft_strstr(const char *str, const char *substring)
{
  int i;
  int j;

  i = 0;
  if (substring[0] == '\0')
    return ((char *)str);
  while (str[i])
  {
    j = 0;
    if (str[i + j] == substring[j])
    {
      while (str[i + j] == substring[j] && str[i + j] && substring[j])
        j++;
      if (substring[j] == '\0')
        return ((char *)str + i);
    }
    i++;
  }
  return (NULL);
}
