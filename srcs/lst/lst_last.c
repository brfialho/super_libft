/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:56:26 by brfialho          #+#    #+#             */
/*   Updated: 2025/09/27 17:56:51 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>
// int	main(void)
// {
// 	t_list a;
// 	t_list b;
// 	t_list c;
// 	t_list *lst;

// 	c.next = 0;
// 	b.next = &c;
// 	a.next = &b;
// 	lst = &a;
// 	printf("%p %p\n", &c, lst_last(lst));
// }