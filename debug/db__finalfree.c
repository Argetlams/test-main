/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__finalfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:25:33 by talemari          #+#    #+#             */
/*   Updated: 2016/12/13 11:15:28 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "libft/libft.h"
#include "db__malloc.h"

void	db__finalfree(void)
{
	t_leaks		*tmp;

	tmp = leaks;
	while (leaks)
	{
		if (ft_strcmp(leaks->adr, "db__base") == 0)
		{
			tmp = leaks->next;
			db__memdel((void **)&leaks);
		}
		leaks = tmp;
		db__memdel((void **)&leaks->adr);
		tmp = leaks->next;
		db__memdel((void **)&leaks);
	}
}
