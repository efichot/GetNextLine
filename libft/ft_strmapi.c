#include "./includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *ret;
  unsigned int i;

  i = 0;
  if (!s || !f)
    return (NULL);
  ret = (char *)malloc(sizeof(*ret) * ft_strlen(s) + 1);
  if (!ret)
    return (NULL);
  while (s[i])
  {
    ret[i] = f(i, s[i]);
    i++;
  }
  ret[i] = '\0';
  return (ret);
}
