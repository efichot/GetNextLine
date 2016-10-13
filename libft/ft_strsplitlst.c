#include "./includes/libft.h"

t_list *ft_strsplitlst(char *s, char c)
{
  t_list *list;
  t_list *new;
  int i;
  int j;
  char word[64];

  i = 0;
  list = NULL;
  while (s[i])
  {
    j = 0;
    while (s[i] == c && s[i])
      i++;
    while (s[i] != c && s[i])
      word[j++] = s[i++];
    word[j] = '\0';
    new = ft_lstnew(word, ft_strlen(word + 1));
    ft_lstpushback(&list, new);
    free(new);
  }
  return (list);
}
