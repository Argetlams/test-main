/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:33:49 by talemari          #+#    #+#             */
/*   Updated: 2016/12/13 12:24:58 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *ptr, size_t newsize)
{
	size_t		cursize;
	char		*newptr;

	if (!ptr)
		return ((char *)malloc(newsize));
	cursize = ft_strlen(ptr);
	if (newsize <= cursize)
		return (ptr);
	newptr = (char *)malloc(newsize);
	ft_strcpy(newptr, ptr);
	free(ptr);
	return (newptr);
}
