/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:17:18 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/19 18:23:45 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack *top_a)
{
	// t_stack	*tmp;

	// tmp = top_a;
	if (top_a == NULL || top_a->next == NULL)
		return (0);
	while (top_a->next != NULL)
	{
		if (top_a->data > top_a->next->data)
				return (1);
		top_a = top_a->next;
	}
	return (0);
}
