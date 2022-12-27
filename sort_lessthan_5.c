/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lessthan_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:04:13 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/26 20:43:59 by sjadalla         ###   ########.fr       */
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

void	sort_3(t_stack **top_a, char s)
{
	int		max;
	int		min;
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *top_a;
	tmp2 = tmp;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	max = largest(3, *top_a);
	min = smallest(3, *top_a);
	if (check_sort(*top_a) == 0)
		return ;
	if (tmp->data == max && tmp2->data == min)
		tmp_max_tmp2_min(top_a, s);
	else if (tmp->data == max)
		tmp_max(top_a, s);
	else if (tmp->data == min)
		tmp_min(top_a, s);
	else if (tmp2->data == max)
		tmp2_max(top_a, s);
	else if (tmp2->data == min)
		tmp2_min(top_a, s);
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
