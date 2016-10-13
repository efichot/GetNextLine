#include "./includes/libft.h"

void ft_arriteri(char **arr, void (*f)(unsigned int, char *))
{
  unsigned int i;

  i = 0;
  if (**arr && f)
  {
    while (arr[i])
    {
      f(i, arr[i]);
      i++;
    }
  }
}
