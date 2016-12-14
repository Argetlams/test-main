/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:21:12 by talemari          #+#    #+#             */
/*   Updated: 2016/11/08 17:26:38 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	int		i;

	i = 0;
	while (src[i] && len)
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	while (len)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}
