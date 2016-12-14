/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:39:42 by talemari          #+#    #+#             */
/*   Updated: 2016/11/14 14:01:15 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list const *lst)
{
	t_list	*list;

	list = (t_list *)lst;
	while (list)
	{
		ft_putstr((char *)list->content);
		ft_putchar('\n');
		list = list->next;
	}
}
