#include "./includes/libft.h"

char *ft_itoa_base(int value, int base)
{
  int tab[64];
  int neg;
  int i;
  char *ret;
  int j;
  char hexatab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
  'B', 'C', 'D', 'E' ,'F'};
  unsigned int val;

  neg = (value < 0 && base == 10) ? 1 : 0;
  val = (value < 0) ? -value : value;
  i = 0;
  while (val != 0)
  {
    tab[i++] = val % base;
    val = val / base;
  }
  ret = (char *)malloc(sizeof(*ret) * i + 1 + neg);
  j = 0;
  if (neg)
  {
    ret[0] = '-';
    j = 1;
  }
  while (i--)
    ret[j++] = hexatab[tab[i]];
  ret[j] = '\0';
  return (ret);
}
