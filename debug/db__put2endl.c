/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__put2endl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:47:28 by talemari          #+#    #+#             */
/*   Updated: 2016/12/10 15:03:21 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	db__put2endl(const char *s1, const char *s2)
{
	if (!s1 && !s2)
	{
		ft_putendl(ERR03);
		return ;
	}
	if (!s1)
	{
		ft_putstr(ERR01);
		ft_putstr(s2);
	}
	if (!s2)
	{
		ft_putstr(s1);
		ft_putstr(ERR01);
	}
	ft_putchar('\n');
	return ;
}
