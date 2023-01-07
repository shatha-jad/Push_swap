/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:10:45 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 19:12:46 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_b(t_stack **top_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;

	if (*top_a == NULL)
		return ;
	if ((*top_a)->next == NULL)
		return ;
	tmp = *top_a;
	tmp3 = (*top_a)->next;
	tmp2 = *top_a;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp2 = tmp2->next;
	tmp2->next = NULL;
	tmp2 = tmp3;
	*top_a = tmp2;
	reset_index(*top_a);
}
