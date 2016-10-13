#include "./includes/libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *ret;
  unsigned int i;

  i = 0;
  if (!s)
    return (NULL);
  ret = (char *)malloc(sizeof(*ret) * len + 1);
  if (!ret)
    return (NULL);
  while (s[i + start] && i < len)
  {
    ret[i] = s[i + start];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}
