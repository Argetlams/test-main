/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:26:00 by talemari          #+#    #+#             */
/*   Updated: 2016/11/09 12:38:43 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n && (s1 || s2))
	{
		c1 = *(unsigned char *)s1;
		c2 = *(unsigned char *)s2;
		if (c1 != c2)
			return (c1 - c2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
