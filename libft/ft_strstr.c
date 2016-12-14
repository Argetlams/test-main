/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:34:19 by talemari          #+#    #+#             */
/*   Updated: 2016/11/09 17:15:36 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *lit)
{
	int		i;
	int		j;
	int		k;

	if (lit[0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i++])
	{
		k = i - 1;
		while (big[k++] == lit[j++])
		{
			if (!lit[j])
				return ((char *)&big[i - 1]);
		}
		j = 0;
	}
	return (NULL);
}
