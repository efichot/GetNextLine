#include "./includes/libft.h"

void   ft_lstpushback(t_list **begin_list, t_list *new)
{
  t_list *list;

  if (!*begin_list)
    *begin_list = new;
  else
  {
    list = *begin_list;
    while (list->next)
      list = list->next;
    list->next = new;
  }
}
