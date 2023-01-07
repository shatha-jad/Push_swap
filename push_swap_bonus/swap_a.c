/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:55:23 by aalaghba          #+#    #+#             */
/*   Updated: 2023/01/07 19:05:55 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_b(t_stack *top_a)
{
	int	tmp;

	if (!top_a || !top_a->next)
		return ;
	tmp = top_a->data;
	top_a->data = top_a->next->data;
	top_a->next->data = tmp;
	reset_index(top_a);
}
