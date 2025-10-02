/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:57:12 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/02 17:25:22 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

void	lst_add_end(t_list **head, t_list *new)
{
	t_list	*lst;

	lst = *head;
	if (!lst)
	{
		lst = new;
		return ;
	}
	lst_last(lst)->next = new;
}
