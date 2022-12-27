/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:38:45 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/26 20:40:45 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tmp_min(t_stack **top_a, char s)
{
	swap_a_b(*top_a, s);
	rotate_a_b(top_a, s);
	sort_3(top_a, s);
}

void	tmp_max_tmp2_min(t_stack **top_a, char s)
{
	swap_a_b(*top_a, s);
	revrotate_a_b(top_a, s);
	sort_3(top_a, s);
}

void	tmp2_min(t_stack **top_a, char s)
{
	revrotate_a_b(top_a, s);
	sort_3(top_a, s);
}

void	tmp_max(t_stack **top_a, char s)
{
	rotate_a_b(top_a, s);
	sort_3(top_a, s);
}

void	tmp2_max(t_stack **top_a, char s)
{
	swap_a_b(*top_a, s);
	sort_3(top_a, s);
}
