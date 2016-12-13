/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:04:07 by talemari          #+#    #+#             */
/*   Updated: 2016/12/12 17:16:48 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*list;
	t_list		*tmp;

	if (!lst || !f)
		return (NULL);
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list = f(lst);
	tmp = list;
	while (lst->next)
	{
		if (!(list->next = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		list->next = f(lst->next);
		lst = lst->next;
		list = list->next;
	}
	return (tmp);
}
