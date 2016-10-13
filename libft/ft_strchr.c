#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
  if (!c)
  {
    i = ft_strlen(s);
    return ((char *)s + i);
  }
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
