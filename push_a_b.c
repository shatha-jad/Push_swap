/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:00:58 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 19:54:47 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_stack **list, t_stack **node, char s, t_all *all)
{
	t_stack	*tmp;

	if (*node == NULL)
		return ;
	tmp = *node;
	*node = (*node)->next;
	tmp->next = *list;
	*list = tmp;
	if (s == 'a')
	{
		all->stack_size_a++;
		all->stack_size_b--;
		write (1, "pa\n", 3);
	}
	else if (s == 'b')
	{
		all->stack_size_a--;
		all->stack_size_b++;
		write (1, "pb\n", 3);
	}
	reset_index(*all->top_b);
	reset_index(*all->top_a);
}
