#include "./includes/libft.h"

void ft_arriter(char **arr, void (*f)(char *))
{
  int i;

  i = 0;
  if (arr && f)
  {
    while (arr[i])
      f(arr[i++]);
  }
}
