/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:11:09 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/16 20:30:10 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all(t_all *all)
{
	int	i;

	i = 0;
	if (all->stack_size_a > 5)
		{
			while((*all->top_a)->next)
			{
				// printf("%d\n", (*all->top_a)->data);
				if ((i + all->chunk_size) > all->stack_size_a)
					all->chunk_size--;
				if((*all->top_a)->data <= all->array[i])
					{
						push_a_b(all->top_b, all->top_a, 'b', all);
						// *all->top_a = (*all->top_a)->next;
						i++;
					}
				else if((*all->top_a)->data <= all->array[i + all->chunk_size])
					{
						push_a_b(all->top_b, all->top_a, 'b', all);
						rotate_a_b(all->top_b, 'b');
						// *all->top_a = (*all->top_a)->next;
						i++;
					}
				else 
					rotate_a_b(all->top_a, 'a');
			}
		}
		// printf("%d \n %d\n", all->stack_size_a, all->stack_size_b);
		// while ((*all->top_b))
		// {
		// 	rotate_max_from_b_and_push_to_a;
		// }
}
// void sort_100(t_stack **top_a, t_stack **top_b)
// {
// 	int median_a;
// 	int	median_b;
// 	int i;
// 	int size;
// 	int j;

// 	size = check_size(*top_a);
	
// 	if (size == 1)
// 		return;
// 	// printf("i: %d  size: %d    median: %d mean: %d\n\n", i, size, median_a, mean_a);

// 	while (size > 5 )
// 	{
	
// 	median_a = stack_medians(*top_a);
// 	i = lessthan_median(*top_a, median_a);
// 	size = check_size(*top_a);
// 	j = size /5;
// 	printf("i: %d  j: %d  size: %d    median: %d \n\n", i, j, size, median_a);
		
// 		if ((*top_b) != NULL)
// 			median_b = stack_medians(*top_b);
// 		else
// 			median_b = median_a / 2;
// 		printf("median_b: %d\n", median_b);
// 	 while (i > 0 && j > 0)
// 	{
// 		if ((*top_a)->data <= median_a)
// 		{
// 			push_a_b(top_b, top_a, 'b');
// 			i--;
// 			sort_b(top_b, median_b);
// 		}
// 		else
// 			rotate_a_b(top_a, 'a');
// 	j--;
// 	}
// 	}
// 	if (check_size(*top_a) <= 5)
// 		sort_lessthan_5(top_a, top_b, 'a');
// }
	
	// size = check_size(*top_a);
	// if (size > 5)
	// {
	// 	printf("recursive \n\n");
	// 	// j++;
	// 	sort_100(top_a, top_b);
	// }
	// if (check_size(*top_a) == 2)
	// 	sort_2(top_a, 'a');
	// while (i > 0 && flag == 0)
	// {
	// 	size = check_size(*top_a);
	// 	// printf("using mean:: i: %d   size: %d   *top_a: %d\n", i, size, *top_a->data);
	// 	if ((*top_a)->data <= mean_a)
	// 	{
	// 		push_a_b(top_b, top_a, 'b');
	// 		i--;
	// 		sort_b (top_b, median_b);
	// 	}
	// 	else
	// 		rotate_a_b(top_a, 'a');
	// 	// printf("*top_a: %d\n\n", *top_a->data);
	// }
	// max = largest(size, top_a);
	// size = check_size(top_a);
	// printf("size after operation: %d    max after operatin: %d\n\n", size, max);
	// *top_a = tmp_a;
	// 	reset_index(tmp_a);
	// 	reset_index(*top_b);
	// 	printf("top_a:\n");
	// 	t_stack *tmp;
	// 	tmp = tmp_a;
	// 	while(tmp)
	// 	{
	// 		printf("Content is %d at index %d  and *next is: %p\n", tmp->data, tmp->index, tmp->next);
	// 		tmp = tmp->next;
	// 	}
	// 	printf("top_b:\n");
	// 		t_stack *tmp2;
	// 	tmp2 = *top_b;
	// while(tmp2)
	// 	{
	// 		printf("Content  %d at index %d and *next is %p\n", tmp2->data, tmp2->index, tmp2->next);
	// 		tmp2 = tmp2->next;
	// 	}

	// if (size == 1 && (tmp_a)->data == max)
	// 	push_a_b(top_b, &tmp_a, 'b');
	// push_a_b()
	// median_b = stack_medians(*top_b);

	// *top_a = tmp_a;
// }

// void sort_100(t_stack **top_a, t_stack **top_b)
// {
// 	int median_data;
// 	int median_index;
// 	int max;
// 	// int min;
// 	// t_stack *tmp;

// 	median_data = stack_median(*top_a, check_size(*top_a), 'd');
// 	median_index = stack_median(*top_a, check_size(*top_a), 'i');
// 	printf("median index: %d median data: %d \n\n", median_index, median_data);
// 	// while ((*top_a)->index < median_index)
// 		// push_a_b(top_b, top_a, 'a');
// 		while((*top_a)->index < (median_index) )
// 	{
// 		max = largest(check_size(*top_a), *top_a);
// 		printf("max: %d", max);
// 		while ((*top_a)->data != max)
// 			rotate_a_b(top_a, 'b');
// 			push_a_b(top_b,top_a,'a');
// 	}

// printf("\ntop_b:\n");
// t_stack *tmp2;
// 	tmp2 = *top_b;
// while(tmp2)
// 	{
// 		printf("Content is %d \n", tmp2->data);
// 		tmp2 = tmp2->next;
// 	}
// 	printf("top_a:\n");
// 	t_stack *tmp;
// 	tmp = *top_a;
// 	while(tmp)
// 	{
// 		printf("Content is %d \n", tmp->data);
// 		tmp = tmp->next;
// 	}
// 	// while ((*top_a)->index > median_index)
// 		// push_a_b(top_b, top_a, 'a');
// 	while((*top_a) != NULL && (*top_a)->index > median_index)
// 	{
// 		min = smallest(check_size(*top_a), *top_a);
// 		while ((*top_a)->data != min)
// 			rotate_a_b(top_a, 'b');
// 			push_a_b(top_b,top_a,'a');
// // 	}
// }