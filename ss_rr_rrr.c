/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_rr_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:10:46 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 20:09:00 by sjadalla         ###   ########.fr       */
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
	reset_index(*top_b);
	reset_index(*top_a);
}

void	rrr(t_stack **top_a, t_stack **top_b)
{
	revrotate_a_b(top_a, 's');
	revrotate_a_b(top_b, 's');
}
