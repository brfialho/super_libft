/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_charcount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:36:07 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/22 20:36:15 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_charcount(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (*s)
		if (*s++ == (unsigned char)c)
			count++;
	return (count);
}
