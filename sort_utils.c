/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:15:52 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/05 21:28:33 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	smallest(int size, t_stack *top_a)
{
	int	i;
	int	smallest;
	t_stack *tmp;
	
	tmp = top_a;
	i = 0;
	smallest = top_a->data;
	while (i < size )
	{
		if (smallest > tmp->data)
		smallest = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (smallest);
}

int	largest(int size, t_stack *top_a)
{
	int	i;
	int	largest;
	t_stack *tmp;
	
	tmp = top_a;
	i = 0;
	largest = top_a->data;
	while (i < size )
	{
		if (largest < tmp->data)
		largest = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (largest);
}

int	largest_index(int size, t_stack *top_a)
{
	int	i;
	int	largest_index;
	int	largest;
	t_stack *tmp;
	
	tmp = top_a;
	i = 0;
	largest = top_a->data;
	printf("index in function: %d\n", tmp->index);
	while (i < size && tmp->next)
	{
		if (largest < tmp->data)
		{
			largest = tmp->data;
			largest_index = tmp->index;
		}
		tmp = tmp->next;
		i++;
	}
printf("index in end function: %d\n", tmp->index);

	return (largest_index);
}

// int stack_medians(t_stack *stack)
// {
// 	int	median;
// 	int	min;
// 	int	max;
// 	min = smallest(check_size(stack), stack);
// 	max = largest(check_size(stack), stack);
// 	median = (max + min)/2;
// 	return (median);
// }

// int stack_median(t_stack *stack, int size, char c)
// {
// 	t_stack	*median;

// 	median = stack;
// ;
// 	while (median != NULL)
// 	{
// 		if (median->index == (size/2))
// 		{
// 			if (c == 'i')
// 			{
// 			return (median->index);
// 			}
// 			if (c == 'd')
// 				return (median->data);
// 		}
// 		median = median->next;
// 	}
// 	return (0);
// }

// int lessthan_median (t_stack *stack, int median)
// {
// 	int i;
	
// 	i = 1;
// 	while (stack != NULL)
// 	{
// 		if (stack->data <= median)
// 			i++;
// 		stack = stack->next;
// 	}
// 	i--;
// 	return(i);
// }

// int stack_mean(t_stack *stack)
// {
//     if (!stack)
//         return -1;
  
//     int count = 0;
//     int sum = 0;
//     float avg = 0.0;
  
//     t_stack *current;
// 	current = stack;
// 	while (current != NULL) {
//         count++;
//         sum += current->data;
//         current = current->next;
//     }
//     avg = sum / count;
  
//     return avg;
// }