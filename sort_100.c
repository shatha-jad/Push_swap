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
		reset_index(*all->top_b);
		printf("%d \n%d \n%d \n%d\n", all->stack_size_a, all->stack_size_b, (*all->top_a)->index, (*all->top_b)->index);
		// while ((*all->top_b))
		// {
		// 	rotate_max_from_b_and_push_to_a;
		
		// }
}