#include "./includes/libft.h"

int ft_lstsize(t_list *begin_list)
{
  int count;
  t_list *list;

  count = 0;
  list = begin_list;
  while (list)
  {
    count++;
    list = list->next;
  }
  return (count);
}
