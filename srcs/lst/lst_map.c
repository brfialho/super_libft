/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:32:21 by brfialho          #+#    #+#             */
/*   Updated: 2025/09/27 17:05:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	n_lst = lst_new_node(f(lst->content));
	if (!n_lst)
		return (0);
	lst = lst->next;
	while (lst)
	{
		node = lst_new_node(f(lst->content));
		if (!node)
		{
			lst_del_all(&n_lst, del);
			return (0);
		}
		lst_add_end(&n_lst, node);
		lst = lst->next;
	}
	return (n_lst);
}
