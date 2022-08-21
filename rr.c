/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:06:46 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/11 21:11:22 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **top_a, t_stack **top_b)
{
	rotate_a_b(top_a, 's');
// 	t_stack *tmp2;
// 	tmp2 = top_a;
// 	while (tmp2->next != NULL)
//  {
//  	printf("tmp2: %d\n", tmp2->data);

//  	// tmp3->next = tmp2->next;
//  	tmp2 = tmp2->next;
//  }
	rotate_a_b(top_b, 's');
}