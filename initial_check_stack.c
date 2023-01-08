/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_check_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:18:32 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/08 20:15:05 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initial_check_stack(t_all *all)
{
	check_dup(*all->top_a, all);
	if (check_sort(*all->top_a) == 0)
		free_error_stack(*all->top_a, all, 0);
	if (all->stack_size_a <= 5)
		sort_lessthan_5(all, 'a');
}

int	check_sort(t_stack *top_a)
{
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

int	check_size(t_stack *top_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = top_a;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	check_dup(t_stack *str, t_all *all)
{
	t_stack	*original;
	t_stack	*nextt;

	original = str;
	nextt = NULL;
	if (str == NULL)
		return ;
	else
	{
		while (original)
		{
			nextt = original -> next;
			while (nextt)
			{
				if (nextt->data == original->data)
					free_error_stack(str, all, 2);
				else
					nextt = nextt->next;
			}
			original = original->next;
		}
	}
}
