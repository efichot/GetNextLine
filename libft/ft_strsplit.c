#include "./includes/libft.h"

char **ft_strsplit(char const *s, char c)
{
  int i;
  int nb_word;
  int len_word;
  int max_len_word;
  char **tab;
  int j;
  int k;

  if (!s || !c)
    return (NULL);
  i = 0;
  nb_word = 0;
  max_len_word = 0;
  while (s[i])
  {
    while (s[i] == c && s[i])
      i++;
    if (s[i] != c && s[i])
    {
      nb_word++;
      len_word = 0;
      while (s[i] != c && s[i])
      {
        len_word++;
        i++;
      }
      if (len_word > max_len_word)
        max_len_word = len_word;
    }
  }
  tab = (char **)malloc(sizeof(*tab) * nb_word + 1);
  if(!tab)
    return (NULL);
  i = 0;
  j = 0;
  while (s[i])
  {
    while (s[i] == c && s[i])
      i++;
    if (s[i] != c && s[i])
    {
      tab[j] = (char *)malloc(sizeof(**tab) * max_len_word + 1);
      if (!tab[j])
        return (NULL);
      k = 0;
      while (s[i] != c && s[i])
      {
        tab[j][k] = s[i];
        k++;
        i++;
      }
      tab[j][k] = '\0';
      j++;
    }
  }
  tab[j] = 0;
  return (tab);
}
