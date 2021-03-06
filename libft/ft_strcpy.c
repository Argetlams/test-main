/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:21:12 by talemari          #+#    #+#             */
/*   Updated: 2016/12/01 12:47:39 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char const *src)
{
	int		i;

	i = -1;
	if (!src)
		return (dst);
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
