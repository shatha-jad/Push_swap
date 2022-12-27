/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:11:25 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/27 15:40:28 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate_a_b(t_stack **top_a, char s)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *top_a;
	if (*top_a)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		tmp2 = tmp ->next;
		tmp->next = NULL;
		tmp2->next = *top_a;
		*top_a = tmp2;
		if (s == 'a')
			write (1, "rra\n", 4);
		else if (s == 'b')
			write (1, "rrb\n", 4);
	}
	reset_index(*top_a);
}
