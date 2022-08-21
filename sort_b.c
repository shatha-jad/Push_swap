/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:45:18 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/06 18:21:35 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_b( t_stack **top_b, int median_b)
{
	// int median_b;
	// median_b = stack_medians(*top_b);
	// printf("median of b: %d \n", median_b);
	if ((*top_b)->data < median_b)
		rotate_a_b(top_b, 'b');
}