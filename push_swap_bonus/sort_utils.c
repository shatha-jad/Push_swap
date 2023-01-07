/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:15:52 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/27 18:59:58 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest(int size, t_stack *top_a)
{
	int		i;
	int		smallest;
	t_stack	*tmp;

	tmp = top_a;
	i = 0;
	smallest = top_a->data;
	while (i < size)
	{
		if (smallest > tmp->data)
		smallest = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (smallest);
}

int	largest(int size, t_stack *top_a)
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
