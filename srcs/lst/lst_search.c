/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_search.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 00:47:54 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/02 17:22:46 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

t_list	*lst_search(t_list *head, void *target, int (*cmp)(void *, void *))
{
	t_list	*lst;

	lst = head;
	while (lst)
	{
		if (cmp(lst->content, target))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
