/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:11:09 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/03 14:36:11 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_alg(t_stack *top_b, int size)
{
	int	j;
	int	max;

	j = 0;
	max = largest(size, top_b);
	while (top_b && max != top_b->data)
	{
		j++;
		top_b = top_b->next;
	}
	if (j < size / 2)
		return (1);
	else
		return (0);
}

void	push_back(t_all *all)
{
	while (*all->top_b)
	{
		if ((*all->top_b)->data == largest(all->stack_size_b, *all->top_b))
			push_a_b(all->top_a, all->top_b, 'a', all);
		else if (find_alg(*all->top_b, all->stack_size_b))
			rotate_a_b(all->top_b, 'b');
		else if (!find_alg(*all->top_b, all->stack_size_b))
			revrotate_a_b(all->top_b, 'b');
	}
}

void	sort_all(t_all *all)
{
	int	i;

	i = 0;
	if (all->stack_size_a > 5)
	{
		while (all->stack_size_a)
		{
			if ((*all->top_a)->data <= all->array[i])
			{
				push_a_b(all->top_b, all->top_a, 'b', all);
				i++;
			}
			if ((i + all->chunk_size) > all->stack_size)
				all->chunk_size--;
			else if ((*all->top_a)->data <= all->array[i + all->chunk_size])
			{
				push_a_b(all->top_b, all->top_a, 'b', all);
				rotate_a_b(all->top_b, 'b');
				i++;
			}
			else
				rotate_a_b(all->top_a, 'a');
		}
	}
	push_back(all);
}
