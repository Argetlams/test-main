/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__put2str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:44:57 by talemari          #+#    #+#             */
/*   Updated: 2016/12/12 17:11:51 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	db__put2str(const char *s1, const char *s2)
{
	if (!s1 && !s2)
	{
		ft_putstr(ERR03);
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
	return ;
}
