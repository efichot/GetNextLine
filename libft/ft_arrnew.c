#include "./includes/libft.h"

char **ft_arrnew(size_t size)
{
  char **ret;

  ret = (char **)malloc(sizeof(*ret) * size + 1);
  if (!ret)
    return (NULL);
  while (size)
    ret[size--] = NULL;
  return (ret);
}
