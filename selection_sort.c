/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:57:31 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 20:03:58 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	selectionsort(int arr[], int n)
{
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	while (i < n - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
			j++;
		}
		if (min_idx != i)
			ft_swap(&arr[min_idx], &arr[i]);
		i++;
	}
}

// void	selectionSort(int arr[], int n)
// {
// 	int	i;
// 	int	j; 
// 	int	min_idx;

// 	// One by one move boundary of unsorted subarray
// 	for (i = 0; i < n-1; i++)
// 	{
// 		// Find the minimum element in unsorted array
// 		min_idx = i;
// 		for (j = i+1; j < n; j++)
// 		  if (arr[j] < arr[min_idx])
// 			min_idx = j;
// 		// ft_swap the found minimum element with the first element
// 		   if(min_idx != i)
// 			ft_swap(&arr[min_idx], &arr[i]);
// 	}
// }