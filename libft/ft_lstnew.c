#include "./includes/libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
  t_list *new;

  new = (t_list *)malloc(sizeof(*new));
  if (!new)
    return (NULL);
  if (content)
  {
    new->content = (char *)malloc(sizeof(*content) * content_size);
    if (!new->content)
      return (NULL);
    ft_memcpy(new->content, content, content_size);
    new->content_size = content_size;
  }
  else
  {
    new->content = NULL;
    new->content_size = 0;
  }
  new->next = NULL;
  return (new);
}
