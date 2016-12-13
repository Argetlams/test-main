/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:14:55 by talemari          #+#    #+#             */
/*   Updated: 2016/12/03 16:12:36 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *c)
{
	int		i;

	i = 0;
	if (!c)
	{
		ft_putstr("FT_PUTENDL : Error : empty string\n");
		return ;
	}
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
}
