/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_rr_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:10:46 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 21:02:51 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **top_a, t_stack **top_b)
{
	swap_a_b(*top_a, 's');
	swap_a_b(*top_b, 'c');
}

void	rr(t_stack **top_a, t_stack **top_b)
{
	rotate_a_b(top_a, 'r');
	rotate_a_b(top_b, 'c');
	reset_index(*top_b);
	reset_index(*top_a);
}

void	rrr(t_stack **top_a, t_stack **top_b)
{
	revrotate_a_b(top_a, 'r');
	revrotate_a_b(top_b, 'c');
}
