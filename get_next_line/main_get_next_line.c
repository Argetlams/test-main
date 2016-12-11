/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 13:19:34 by talemari          #+#    #+#             */
/*   Updated: 2016/12/11 14:30:04 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "debug/debug.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int					main(int ac, char **av)
{
	int		fd;
	int		fd2;
	char	*str;
	char	*str2;
	int		err;
	int		err2;
	int i;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	err = 10;
	err2 = 10;
	i = 0;
	while (i < 6)
	{
		err = get_next_line(fd, &str);
		err2 = get_next_line(fd2, &str2);
		ft_putendl("-----------------------------------------");
		ft_putstr(str);
		ft_putstr(" : ");
		ft_putnbendl(err);
		ft_putstr(str2);
		ft_putstr(" : ");
		ft_putnbendl(err2);
		ft_putendl("--------------------------------------------");
		i++;
		ft_strdel(&str);
		ft_strdel(&str2);
	}
	db__printleaks();
	return (0);
}
