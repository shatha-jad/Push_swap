/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr&rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:10:46 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:34:14 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **top_a, t_stack **top_b)
{
	swap_a_b(*top_a, 's');
	swap_a_b(*top_b, 's');
}

void	rr(t_stack **top_a, t_stack **top_b)
{
	rotate_a_b(top_a, 's');
	rotate_a_b(top_b, 's');
}

void	rrr(t_stack **top_a, t_stack **top_b)
{
	revrotate_a_b(top_a, 's');
	revrotate_a_b(top_b, 's');
}

// void	rrr(t_stack **top_a, t_stack **top_b)
// {
// 	revrotate_a_b(top_a, 's');
// // 	t_stack *tmp2;
// // 	tmp2 = top_a;
// // 	while (tmp2->next != NULL)
// //  {
// //  	printf("tmp2: %d\n", tmp2->data);

// //  	// tmp3->next = tmp2->next;
// //  	tmp2 = tmp2->next;
// //  }
// 	revrotate_a_b(top_b, 's');
// }