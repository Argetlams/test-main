/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db__malloc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 13:31:29 by talemari          #+#    #+#             */
/*   Updated: 2016/12/10 15:09:47 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DB__MALLOC_H
# define DB__MALLOC_H

# include <stdio.h>

typedef struct		s_filepos
{
	const char		*file;
	const char		*func;
	int				line;
}					t_filepos;

typedef struct		s_leaks
{
	void			*ptr;
	char			*adr;
	t_filepos		pos;
	size_t			size;
	struct s_leaks	*next;
}					t_leaks;

t_leaks				*leaks;

#endif
