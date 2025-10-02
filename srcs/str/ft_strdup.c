/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:25:50 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/02 16:19:56 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	char	*temp;

	if (!s)
		return (NULL);
	new = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (!new)
		return (NULL);
	temp = new;
	while (*s)
		*temp++ = *s++;
	return (new);
}
