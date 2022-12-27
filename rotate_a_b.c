/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:10:45 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/27 15:40:31 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_b(t_stack **top_a, char s)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;

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
	if (s == 'a')
		write (1, "ra\n", 3);
	else if (s == 'b')
		write (1, "rb\n", 3);
	*top_a = tmp2;
	reset_index(*top_a);
}
