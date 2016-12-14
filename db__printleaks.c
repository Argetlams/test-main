/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_printleaks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 11:18:51 by talemari          #+#    #+#             */
/*   Updated: 2016/12/13 11:11:18 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"
#include "db__malloc.h"

void	db__printleaks(void)
{
	t_leaks	*pleaks;
	int		i;

	pleaks = leaks;
	i = 0;
	while (pleaks)
	{
		if (ft_strcmp(pleaks->adr, "db__base") == 0)
			pleaks = pleaks->next;
		if (!pleaks)
			break ;
		ft_putendl("---------------------------");
		ft_putendl("LEAK DETECTED : ");
		ft_putstr("in file : ");
		ft_putendl(pleaks->pos.file);
		ft_putstr("Function : ");
		ft_putendl(pleaks->pos.func);
		ft_putstr("Line : ");
		ft_putnbendl(pleaks->pos.line);
		ft_putstr(" Pointer adress : ");
		ft_putendl(pleaks->adr);
		ft_putstr("Allocated size : ");
		ft_putnbendl(pleaks->size);
		pleaks = pleaks->next;
		i++;
	}
	ft_putendl("---------------------------");
	ft_putstr("Total memory leaks : ");
	ft_putnbendl(i);
	db__finalfree();
}
