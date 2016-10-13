#include "./includes/libft.h"

int ft_arrsize(char **arr)
{
  int i;

  i = 0;
  if (arr)
  {
    while (arr[i])
      i++;
  }
  return (i);
}
