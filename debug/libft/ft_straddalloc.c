/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:34:44 by talemari          #+#    #+#             */
/*   Updated: 2016/11/28 14:50:52 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcatalloc(char *s1, char *s2)
{
	char	*newstr;

	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!newstr)
		return (NULL);
	newstr = ft_strcpy(newstr, s1);
	newstr = ft_strcat(s1, s2);
	return (newstr);
}
