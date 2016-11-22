/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <efichot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:06:57 by efichot           #+#    #+#             */
/*   Updated: 2016/11/14 20:58:25 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				ft_eof(char **line, char **stock, char **buffer)
{
	if (ft_strlen(*stock) > 0)
	{
		*line = ft_strdup(*stock);
		ft_strdel(stock);
		ft_strdel(buffer);
		return (1);
	}
	return (0);
}

int				ft_failed(char **buffer, char **stock)
{
	ft_strdel(buffer);
	ft_strdel(stock);
	return (-1);
}

unsigned int	ft_strchrpos(char *stock, char c)
{
	unsigned int	i;

	i = 0;
	while (stock[i])
	{
		if (stock[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char			*ft_realloc_stk(char *tmp, char **stk)
{
	ft_strdel(stk);
	*stk = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (*stk);
}

int				get_next_line(int const fd, char **line)
{
	static char		*stk = NULL;
	char			*buffer;
	int				ret;
	char			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1 || BUFF_SIZE > 1000000)
		return (-1);
	stk = (!stk) ? ft_strnew(BUFF_SIZE) : stk;
	while (!(ft_strchr(stk, '\n')))
	{
		buffer = ft_strnew(BUFF_SIZE);
		if (!(ret = read(fd, buffer, BUFF_SIZE)))
			return (ft_eof(line, &stk, &buffer));
		if (ret == -1)
			return (ft_failed(&buffer, &stk));
		tmp = ft_strjoin(stk, buffer);
		stk = ft_realloc_stk(tmp, &stk);
		ft_strdel(&buffer);
	}
	*line = ft_strsub(stk, 0, ft_strchrpos(stk, '\n'));
	if ((tmp = ft_strsub(stk, ft_strchrpos(stk, '\n') + 1, ft_strlen(stk))))
		stk = ft_realloc_stk(tmp, &stk);
	return (1);
}
