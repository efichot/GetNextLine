#include "./includes/libft.h"

char *ft_strtrim(char const *s)
{
  unsigned int i;
  unsigned int len;
  unsigned int j;

  i = 0;
  if (!s)
    return (NULL);
  j = ft_strlen(s) - 1;
  while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
    i++;
  if (!s[i])
    return (ft_strsub(s, i, 0));
  while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
    j--;
  if (!i && j == ft_strlen(s) - 1)
    return (ft_strdup(s));
  len = j - i;
  return (ft_strsub(s, i, len + 1));
}
