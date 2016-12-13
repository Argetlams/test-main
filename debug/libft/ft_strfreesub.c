/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreesub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:33:58 by talemari          #+#    #+#             */
/*   Updated: 2016/12/07 16:36:12 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strfreesub(char *s, unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;

	if (!(res = (char *)malloc(sizeof(*res) * len + 1)) || !s)
		return (NULL);
	i = 0;
	while (len--)
		res[i++] = s[start++];
	res[i] = '\0';
	ft_strdel(&s);
	return (res);
}
