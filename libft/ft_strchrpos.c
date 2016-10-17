#include "./includes/libft.h"

int ft_strchrpos(const char *s, int c)
{
  int i;
  char a;

  i = 0;
  a = (char)c;
  if (!s)
    return (-1);
  if (!c)
    return (ft_strlen(s) + 1);
  while (s[i])
    {
      if (s[i] == c)
	return (i);
      i++;
    }
  return (-1);
}
