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
				if ((i + all->chunk_size) > all->stack_size_a)
					all->chunk_size--;
				if((*all->top_a)->data <= all->array[i])
					{
						push_a_b(all->top_b, all->top_a, 'b', all);
						i++;
					}
				else if((*all->top_a)->data <= all->array[i + all->chunk_size])
					{
						push_a_b(all->top_b, all->top_a, 'b', all);
						rotate_a_b(all->top_b, 'b');
						i++;
					}
				else 
					rotate_a_b(all->top_a, 'a');
			}
		}
	// 	reset_index(*all->top_b);
		printf("%d \n%d \n%d \n%d\nLargest: %d\n largest_index:%d\n", all->stack_size_a, all->stack_size_b, (*all->top_a)->index, (*all->top_b)->index,largest(all->stack_size_b, *all->top_b), largest_index(all->stack_size_b, *all->top_b) );
	// while (*all->top_b)
	// {
	// 	if (*all->index_b == largest
	// }

			t_stack	*tmp;

			tmp = *all->top_b;
		// printf("tmp: %d top_b:%d\n", tmp->data, (*all->top_b)->data);
		// *all->top_b = (*all->top_b)->next;
		// while ((*all->top_b)->next)
		// {
		// 	push_a_b(all->top_a, all->top_b, 'a', all);
		// }
		// printf("tmp: %d top_b:%d\n", tmp->data, (*all->top_b)->data);
		// *all->top_b = tmp;
		// printf("tmp: %d top_b:%d\n", tmp->data, (*all->top_b)->data);
		
		// while ((*all->top_b)->next)
		// {
		// 	*all->top_b = tmp;
		// 	// rotate_max_from_b_and_push_to_a;
		// 	printf("data at B: %d\nLARGEST AT B: %d\n", tmp->data, largest(all->stack_size_b, *all->top_b));
		// 	while((*all->top_b)->next)
		// 	{
		// 	printf("HI\n");
		// 	if ((*all->top_b)->data == largest(all->stack_size_b, *all->top_b))
		// 	{
		// 			printf("Hello\n");
		// 			push_a_b(all->top_a, all->top_b, 'a', all);
		// 	}
		// 	else
		// 	*all->top_b = (*all->top_b)->next;
		// 	}
		// }
		// push_a_b(all->top_a, all->top_b, 'a', all);
}