/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:45:49 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 20:19:14 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	largest_5(int size, t_stack *top_a)
{
	int		i;
	int		largest;
	t_stack	*tmp;

	tmp = top_a;
	i = 0;
	largest = top_a->data;
	while (i < size)
	{
		if (largest < tmp->data)
		largest = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (largest);
}
