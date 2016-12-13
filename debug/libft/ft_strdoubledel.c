/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdoubledel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:22:35 by talemari          #+#    #+#             */
/*   Updated: 2016/12/12 17:17:14 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdoubledel(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
	str = NULL;
}
