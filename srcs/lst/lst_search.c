/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_search.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 00:47:54 by brfialho          #+#    #+#             */
/*   Updated: 2025/09/30 00:48:21 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

t_list	*lst_search(t_list *lst, void *target, int (*cmp)(void *, void *))
{
	if (!cmp)
		return (NULL);
	while (lst)
	{
		if (cmp(lst->content, target))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
