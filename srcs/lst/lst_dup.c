/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:54:41 by brfialho          #+#    #+#             */
/*   Updated: 2025/09/27 17:57:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

t_list	*lst_dup(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	if (!content)
		return (NULL);
	new = lst_new_node(content);
	if (!new)
		return (del(content), NULL);
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (lst_del_all(&new, del), NULL);
		node = lst_new_node(content);
		if (!node)
			return (del(content), lst_del_all(&new, del), NULL);
		lst_add_end(&new, node);
		lst = lst->next;
	}
	return (new);
}
