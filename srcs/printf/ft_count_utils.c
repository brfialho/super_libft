/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:57:47 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/18 18:10:09 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_count_digits(int n, int base)
{
	int	count;

	count = 1;
	if (n < 0 && count++)
		n *= -1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	pf_count_unsigned(unsigned int n, int base)
{
	int	count;

	count = 1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	pf_count_long(unsigned long n, int base)
{
	int	count;

	count = 1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	pf_instr(char *s, char c)
{
	while (*s)
		if (c == *s++)
			return (1);
	return (0);
}
