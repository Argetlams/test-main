/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:32:52 by talemari          #+#    #+#             */
/*   Updated: 2016/11/11 16:32:56 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(char const *big, char const *lit, size_t n)
{
	size_t	l;

	if (!*lit)
		return ((char *)big);
	l = ft_strlen(lit);
	while (*big && n-- >= l)
	{
		if (*big == *lit && ft_memcmp(big, lit, l) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
