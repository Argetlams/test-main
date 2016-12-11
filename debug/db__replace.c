/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__replace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 16:20:34 by talemari          #+#    #+#             */
/*   Updated: 2016/12/10 16:44:28 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

int		db__replace(char *str, char **names)
{
	int		i;
	int		occ;
	int		total;
	int		fd;
	char	buf[BUFF_SIZE];
	char	**temp;

	i = 1;
	occ = 0;
	while (names)
	{
		if (!names[i] || (fd = open(names[i], O_RDWR)) < 1)
		{
			ft_putendl(ERR05);
			return (-1);
		}
		if ((read(fd, buf, BUFF_SIZE)) == -1)
		{
			ft_putendl(ERR06);
			return (-1);
		}
		temp = ft_strsplit(buf, '\n');
		fd = freopen(names[i], "w", names[i]);
	}
}
