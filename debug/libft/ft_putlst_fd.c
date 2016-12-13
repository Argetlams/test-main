/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:39:42 by talemari          #+#    #+#             */
/*   Updated: 2016/11/14 14:01:21 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst_fd(t_list const *lst, int fd)
{
	t_list	*list;

	list = (t_list *)lst;
	while (list)
	{
		ft_putstr_fd((char *)list->content, fd);
		ft_putchar_fd('\n', fd);
		list = list->next;
	}
}
