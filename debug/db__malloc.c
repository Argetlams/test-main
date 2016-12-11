/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:36:10 by talemari          #+#    #+#             */
/*   Updated: 2016/12/10 15:10:03 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "db__malloc.h"
#include <stdlib.h>

static t_leaks		*leakscheck(void *ptr)
{
	char	*adr;
	t_leaks *tmp;

	tmp = leaks;
	adr = (char *)malloc(sizeof(char) * 20);
	sprintf(adr, "%p\n", ptr);
	while (tmp)
	{
		if (tmp->adr == adr)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

static t_leaks		*leakscreate(void *ptr, size_t size, t_filepos pos)
{
	t_leaks		*cleaks;

	cleaks = (t_leaks *)malloc(sizeof(t_leaks));
	cleaks->adr = (char *)malloc(sizeof(char) * 20);
	cleaks->ptr = ptr;
	cleaks->pos = pos;
	sprintf(cleaks->adr, "%p\n", cleaks->ptr);
	cleaks->size = size;
	cleaks->next = NULL;
	return (cleaks);
}

static void			leakadd(t_leaks *leak)
{
	t_leaks	*tmp;

	tmp = leaks;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = leak;
}

void	*db__malloc(size_t size, const char *file, const char *function, int line)
{
	char			*adr;
	void			*ptr;
	t_filepos		pos;
	static int		runs;
	t_leaks			*newleak;
	t_leaks			*tmp;

	ptr = malloc(size);
	pos.file = file;
	pos.func = function;
	pos.line = line;
	tmp = leaks;
	if (runs != 1)
	{
		runs = 1;
		leaks = (t_leaks *)malloc(sizeof(t_leaks));
		leaks->pos.file = "db__base";
		leaks->pos.func = "db__base";
		leaks->adr = "db__base";
		leaks->pos.line = 0;
		leaks->size = 0;
		leaks->ptr = NULL;
		leaks->next = NULL;
	}
	newleak = leakscreate(ptr, size, pos);
	leakadd(newleak);
	return (ptr);
}
