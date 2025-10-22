/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_allinset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:26:55 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/22 19:28:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_allinset(const char *string, const char *set)
{
	char	*s;

	s = (char *)string;
	while (*s)
		if (!ft_strchr(set, *s++))
			return (NULL);
	return ((char *)string);
}
