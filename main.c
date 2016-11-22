/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <efichot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:35:35 by efichot           #+#    #+#             */
/*   Updated: 2016/11/14 17:06:52 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;

	(void)ac;
	if ((fd = open(av[1], O_RDONLY)) <= 0)
	{
		ft_putstr("Open() failed.\n");
		return (-1);
	}
	line = NULL;
	while (get_next_line(fd, &line))
	{
		ft_putstr("line:");
		ft_putendl(line);
		ft_strdel(&line);
	}
	close(fd);
	return (0);
}
