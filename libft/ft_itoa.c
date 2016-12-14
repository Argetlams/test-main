/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:42:47 by talemari          #+#    #+#             */
/*   Updated: 2016/12/12 17:14:54 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_isneg(int *n, int *isneg)
{
	if (*n < 0)
	{
		*n *= -1;
		*isneg = TRUE;
	}
}

char		*ft_itoa(int n)
{
	int		temp;
	int		l;
	int		isneg;
	char	*res;

	if (n == INT_NEG_SIZE)
		return (ft_strdup("-2147483648"));
	temp = n;
	l = 2;
	isneg = FALSE;
	ft_isneg(&n, &isneg);
	while (temp /= 10)
		l++;
	l += isneg;
	if ((res = (char *)malloc(sizeof(char) * l)) == NULL)
		return (NULL);
	res[--l] = '\0';
	while (l--)
	{
		res[l] = n % 10 + '0';
		n = n / 10;
	}
	if (isneg)
		res[0] = '-';
	return (res);
}
