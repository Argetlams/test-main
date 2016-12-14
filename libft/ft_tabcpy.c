/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:21:12 by talemari          #+#    #+#             */
/*   Updated: 2016/11/20 09:10:01 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabcpy(char **dst, char const **src)
{
	int		i;

	i = -1;
	while (src[++i])
		dst[i] = ft_strcpy(dst[i], src[i]);
	dst[i] = NULL;
	return (dst);
}
