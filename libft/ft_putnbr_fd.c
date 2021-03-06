#include "./includes/libft.h"

void ft_putnbr_fd(int n, int fd)
{
  if (n == -2147483648)
    write(fd, "-2147483648", 11);
  else
  {
    if (n < 0)
    {
      n = -n;
      write(fd, "-", 1);
    }
    if (n >= 10)
    {
      ft_putnbr_fd(n / 10, fd);
      ft_putnbr_fd(n % 10, fd);
    }
    else
      ft_putchar_fd(n + '0', fd);
  }
}
