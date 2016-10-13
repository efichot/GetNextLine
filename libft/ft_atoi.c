#include "libft.h"

int ft_atoi(char *str)
{
  int i;
  int neg;
  int ret;

  i = 0;
  neg = 0;
  ret = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
    i++;
  if (str[i] == '-')
    neg = 1;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i] >= '0' && str[i] <= '9')
  {
    ret *= 10;
    ret += str[i] - '0';
    i++;
  }
  if (neg)
    return (-ret);
  return(ret);
}
