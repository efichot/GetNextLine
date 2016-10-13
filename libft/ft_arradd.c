#include "./includes/libft.h"

int ft_arradd(char ***arr, char *str)
{
  char **tmp;
  char **new;
  size_t i;

  if (!arr && !str)
    return (-1);
  tmp = *arr;
  i = 0;
  new = (tmp == NULL) ? ft_arrnew(2) : ft_arrnew((size_t)ft_arrsize(tmp) + 2);
  if (!new)
    return (-1);
  if (tmp)
  {
    while (tmp)
    {
      new[i] = tmp[i];
      tmp[i] = NULL;
      i++;
    }
    free(tmp);
  }
  new[i] = str;
  new[++i] = 0;
  *arr = new;
  return (0);
}
