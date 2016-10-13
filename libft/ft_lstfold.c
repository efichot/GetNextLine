#include "./includes/libft.h"

void *ft_lstfold(t_list *lst, void *(*f)(const void *, const void *))
{
  t_list *list;
  void *res;

  if (!lst)
    return (NULL);
  list = lst;
  res = list->content;
  list = list->next;
  while (list)
  {
    res = f(res, list->content);
    list = list->next;
  }
  return (res);
}
