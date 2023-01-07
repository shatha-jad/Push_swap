/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:11:25 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 20:35:47 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate_a_b(t_stack **top_a)
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
	}
}
