/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lessthan_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:04:13 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/27 14:35:42 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_lessthan_5(t_all *all, char s)
{
	if (check_size(*all->top_a) == 2)
		sort_2(all->top_a, s);
	else if (all->stack_size_a == 3)
		sort_3(all->top_a, s);
	else if (all->stack_size_a == 4)
		sort_4(all, s);
	else if (all->stack_size_a == 5)
		sort_5(all, s);
}

void	sort_2(t_stack **top_a, char s)
{
	if (check_sort(*top_a) == 0)
		return ;
	else
		swap_a_b(*top_a, s);
}

void	sort_3(t_stack **a, char s)
{
	int	one;
	int	two;
	int	three;

	one = (*a)->data;
	two = (*a)->next->data;
	three = (*a)->next->next->data;
	if (check_sort(*a) == 0)
		return ;
	if (one > two && one > three && two > three)
	{
		rotate_a_b(a, s);
		swap_a_b(*a, s);
	}
	else if (one > two && one > three && three > two)
		rotate_a_b(a, s);
	else if (two > one && two > three && one > three)
		revrotate_a_b(a, s);
	else if (two > one && two > three && three > one)
	{
		swap_a_b(*a, s);
		rotate_a_b(a, s);
	}
	else if (three > one && three > two && one > two)
		swap_a_b(*a, s);
}

void	sort_4(t_all *all, char s)
{
	int	min;

	if (check_sort(*all->top_a) == 0)
		return ;
	min = smallest(all->stack_size_a, *all->top_a);
	while ((*all->top_a)->next != NULL )
	{
		rotate_a_b(all->top_a, s);
		if ((*all->top_a)->data == min)
			break ;
	}
	push_a_b(all->top_b, all->top_a, 'b', all);
	sort_3(all->top_a, s);
	push_a_b(all->top_a, all->top_b, s, all);
}

void	sort_5(t_all *all, char s)
{
	int	min;

	if (check_sort(*all->top_a) == 0)
		return ;
	min = smallest(all->stack_size_a, *all->top_a);
	while ((*all->top_a)->next != NULL )
	{
		rotate_a_b(all->top_a, s);
		if ((*all->top_a)->data == min)
			break ;
	}
	push_a_b(all->top_b, all->top_a, 'b', all);
	sort_4(all, s);
	push_a_b(all->top_a, all->top_b, s, all);
}
