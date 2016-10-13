#include "./includes/libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list *list;
  t_list *new;
  t_list *first_list;
  t_list *prev;

  list = lst;
  new = NULL;
  first_list = NULL;
  while (list)
  {
    new = f(list);
    if (!new)
      return (NULL);
    if (!first_list)
      first_list = new;
    else
      prev->next = new;
    prev = new;
    list = list->next;
  }
  return (first_list);
}
