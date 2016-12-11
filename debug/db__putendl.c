/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__putendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:16:33 by talemari          #+#    #+#             */
/*   Updated: 2016/12/10 15:03:47 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	db__putendl(char const *c)
{
	int		i;

	i = 0;
	if (!c)
	{
		ft_putstr(ERR01);
		return ;
	}
	ft_putstr(c);
	ft_putchar('\n');
}