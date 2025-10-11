/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:38:23 by brfialho          #+#    #+#             */
/*   Updated: 2025/10/11 20:21:13 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

static void	swap(int *array, int j, int i);
static int	partition(int *array, int len);

// void	ft_quick_sort(int *array, int len)
// {
// 	int	pivot;

// 	if (len <= 1)
// 		return ;
// 	pivot = partition(array, len);

// 	ft_printf(" AAA%d %d %d\n", pivot, len, len - pivot - 1);
// 	ft_quick_sort(array, pivot);
// 	ft_quick_sort(array + pivot, len - 1 - pivot);
// }
// static int	partition(int *array, int len)
// {
// 	int	i;
// 	int	j;
// 	int	pivot;

// 	i = -1;
// 	j = 0;
// 	pivot = array[len / 2];
// 	swap(array, len / 2, len - 1);

// 	while (--len)
// 		if (array[j++] < pivot)
// 			swap(array, j - 1, ++i);
// 	swap(array, j, i + 1);
// 	return (i + 1);
// }

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
	ft_quick_sort(array + 1 + i, j - i);
}
// IF I = 2
// PIVOT IS IN [I + 1] OR [6]
// LEFT END IS IN [5] // LEFT LEN = 6
// RIGHT LEN =  TOTAL - LEFT LEN - 1

static void	swap(int *array, int j, int i)
{
	int	tmp;

	tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
}
int main(void)
{
	int size = 14;
	int array[14] = {5, 4, 3, 2, 1, 11, 200, 0 , 5, 5, -10, -1283913, 111111, 2000};

	ft_printf("BEFORE:\n");
	for (int i = 0; i < size; i++)
		ft_printf("%d ", array[i]);
	ft_printf("\n");

	ft_quick_sort(array, size);

	ft_printf("AFTER:\n");
	for (int j = 0; j < size; j++)
		ft_printf("%d ", array[j]);
	ft_printf("\n");

	ft_printf("SGHASDSA %d\n", 500/3);
}