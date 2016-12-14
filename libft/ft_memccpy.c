/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:01:16 by talemari          #+#    #+#             */
/*   Updated: 2016/11/13 14:01:21 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char *src2;
	unsigned char		c2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	c2 = (unsigned char)c;
	if (src2 == dest2 || i == n)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == c2)
			return (dest2 + i + 1);
		i++;
	}
	return (NULL);
}
