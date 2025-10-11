/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:38:23 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/11 18:39:16 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

static void	swap(int *array, int j, int i);

void	ft_quick_sort(int *array, int len)
{
	int	i;
	int	j;
	int	pivot;

	if (len <= 1)
		return ;
	i = -1;
	j = 0;
	pivot = array[len / 2];
	swap(array, len / 2, len - 1);
	while (--len)
		if (array[j++] < pivot)
			swap(array, j - 1, ++i);
	swap(array, j, i + 1);
	ft_quick_sort(array, ++i);
	ft_quick_sort(array + i, j - i);
}

static void	swap(int *array, int j, int i)
{
	int	tmp;

	tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
}
