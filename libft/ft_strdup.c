#include "libft.h"

char *ft_strdup(const char *s)
{
  char *ret;

  ret = (char *)malloc(sizeof(*ret) * ft_strlen(s) + 1);
  if (!ret)
    return (NULL);
  ft_strcpy(ret, s);
  return (ret);
}
