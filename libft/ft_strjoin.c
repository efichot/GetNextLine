#include "./includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *ret;
  int i;
  int j;

  i = 0;
  j = 0;
  if (!s1 || !s2)
    return (NULL);
  ret = (char *)malloc(sizeof(*ret) * ft_strlen(s1) + ft_strlen(s2) + 1);
  if (!ret)
    return (NULL);
  ft_strcpy(ret, s1);
  ft_strcat(ret, s2);
  return (ret);
}
