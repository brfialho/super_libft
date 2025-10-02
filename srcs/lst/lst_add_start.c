/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:57:06 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/02 17:26:05 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

void	lst_add_start(t_list **head, t_list *new)
{
	t_list	*lst;

	lst = *head;
	new->next = lst;
	lst = new;
}
