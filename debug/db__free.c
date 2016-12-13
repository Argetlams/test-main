/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 11:08:12 by talemari          #+#    #+#             */
/*   Updated: 2016/12/12 19:14:56 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "db__malloc.h"
#include <stdlib.h>

static void			leakdelete(t_leaks **leaks, void *ptr)
{
	char	*adr;
	t_leaks	*tmp;
	t_leaks	*prev;

	prev = *leaks;
	tmp = prev->next;
	adr = (char *)malloc(sizeof(char) * 20);
	sprintf(adr, "%p\n", ptr);
	while (tmp)
	{
		if (ptr == tmp->ptr)
		{
			prev->next = tmp->next;
			free(tmp->adr);
			free(tmp);
			tmp = prev;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	free(adr);
}

void				db__free(void *ptr)
{
	t_leaks	*fleaks;

	fleaks = leaks;
	leakdelete(&fleaks, ptr);
	free(ptr);
}
