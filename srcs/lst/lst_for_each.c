/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_for_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:56:20 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/02 17:22:15 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

void	lst_for_each(t_list *head, void (*f)(void *))
{
	t_list	*lst;

	lst = head;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
