#include "./includes/libft.h"

int ft_intlen(int nb)
{
  int count;

  count = 0;
  if (nb < 0)
    count++;
  while (nb != 0)
  {
    count++;
    nb = nb / 10;
  }
  return (count);
}

char *ft_itoa(int n)
{
  unsigned int	tmp;
  int				len;
  char			*str;
  int       i;

  if (n == 0)
    return ("0");
  i = 0;
  tmp = (n < 0) ? (n * -1) : n;
  len = ft_intlen(n);
  str = ft_strnew(len + 1);
  if (str == NULL)
    return (NULL);
  str[len] = '\0';
  if (n < 0)
  {
    str[0] = '-';
    i = 1;
  }
  while (len-- > i)
  {
    str[len] = tmp % 10 + '0';
    tmp = tmp / 10;
  }
  return (str);
}
