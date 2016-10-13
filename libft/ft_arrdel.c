#include "./includes/libft.h"

void ft_arrdel(char ***arr)
{
  char **tmp;
  size_t i;

  i = 0;
  if (!arr || !*arr)
    return ;
  tmp = *arr;
  while (tmp[i])
  {
    free((char *)tmp[i]);
    i++;
  }
  free((char **)tmp);
  *arr = NULL;
}
