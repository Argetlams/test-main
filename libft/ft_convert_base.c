/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 10:51:23 by talemari          #+#    #+#             */
/*   Updated: 2016/12/14 11:07:21 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	nbsize(int nb)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static int	power(int nb, int power)
{
	while (power > 0)
	{
		nb = nb * nb;
		power--;
	}
	return (nb);
}

int		ft_convert_base(int nb, int base)
{
	char	base_digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
								'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int		converted[64];
	int		i;
	int		res;

	i = 0;
	while (nb != 0)
	{
		converted[i] = nb % base;
		nb = nb / base;
		i++;
	}
	res = 0;
	while (i >= 0)
	{
		res = res * (power(10, nbsize(base_digit[converted[i]])));
		res += base_digit[converted[i]];
		i--;
	}
	return (res);
}
