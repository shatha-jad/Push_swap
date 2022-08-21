/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:55:23 by aalaghba          #+#    #+#             */
/*   Updated: 2022/06/11 21:10:30 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_b(t_stack *top_a, char s)
{
	int	tmp;

	if (!top_a || !top_a->next)
		return ;
	tmp = top_a->data;
	top_a->data = top_a->next->data;
	top_a->next->data = tmp;
	if (s == 'a')
		write (1, "sa\n", 3);
	else if (s == 'b')
		write (1, "sb\n", 3);
}
