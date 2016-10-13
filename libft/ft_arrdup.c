#include "./includes/libft.h"

char **ft_arrdup(char **arr)
{
  int size;
  char **copy;
  int i;

  size = ft_arrsize(arr);
  copy = (char **)malloc(sizeof(*copy) * size + 1);
  if (!copy)
    return (NULL);
  i = 0;
  while (arr[i])
  {
    copy[i] = ft_strdup(arr[i]);
    i++;
  }
  copy[i] = 0;
  return (copy);
}
