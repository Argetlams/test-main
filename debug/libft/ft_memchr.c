/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:44:08 by talemari          #+#    #+#             */
/*   Updated: 2016/11/09 12:43:45 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char	mark;
	unsigned char	*str;
	int				i;

	mark = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (str[i] == mark)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
