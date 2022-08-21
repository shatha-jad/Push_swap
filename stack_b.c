/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:23:46 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/11 21:02:46 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void stack_b(t_stack **top_b, t_stack *top_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = malloc(sizeof(t_stack *));
	if (!tmp)
		return ;
	if (!top_b)
	// tmp = *top_b;
	// if (top_b == NULL)
	// {
	// 	tmp->data = top_a;
	// 	tmp->next = NULL;
	// 	return (tmp);
	// }
	// tmp = *top_b;
	tmp->next = top_a;
	*top_b = tmp;
	// while(top_b)
	// {
	// 	printf("Content is %d at index %d\n", top_b->data, top_b->index);
	// 	top_a = top_a->next;
	// }
}
