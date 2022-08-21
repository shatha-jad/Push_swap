/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lessthan_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:04:13 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/19 17:36:47 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void sort_lessthan_5(t_stack **top_a, t_stack **top_b, char s)
{
	if (check_size(*top_a) == 2)
		sort_2(top_a, s);
	else if (check_size(*top_a) == 3)
		sort_3(top_a, s);
	else if (check_size(*top_a) == 4)
		sort_4(top_a, top_b, s);
	else if (check_size(*top_a) == 5)
		sort_5(top_a, top_b, s);
}

void sort_2(t_stack **top_a, char s)
{
	// if (check_size(top_a) == 2)
	if (check_sort(*top_a)  == 0)
			return ;
	else
		swap_a_b(*top_a, s);
}

void sort_3(t_stack **top_a, char s)
{
	int max;
	int min;
	t_stack *tmp;
	t_stack	*tmp2;
	

	tmp = *top_a;
	tmp2 = tmp;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	max = largest(3, *top_a);
	min = smallest(3, *top_a);
	if (check_sort(*top_a)  == 0)
			return ;
	if (tmp->data == max && tmp2->data == min)
	{
		swap_a_b(*top_a, s);
		revrotate_a_b(top_a, s);
		sort_3(top_a, s);
	}
	else if (tmp->data == max)
	{
		rotate_a_b(top_a, s);
		sort_3(top_a, s);
	}
	else if (tmp->data == min)
	{
		swap_a_b(*top_a, s);
		rotate_a_b(top_a, s);
		sort_3(top_a, s);
	}
	else if (tmp2->data == max)
	{
		swap_a_b(*top_a, s);
		sort_3(top_a, s);
	}
	else if (tmp2->data == min)
	{
		revrotate_a_b(top_a, s);
		sort_3(top_a, s);
	}
	// swap_a_b(*top_a, 'a');
	// if (check_sort(*top_a)  == 0)
	// 	return ;
	// else if (check_sort(*top_a)  == 1)
	// {
	// 	revrotate_a_b(top_a, 'a');
	// 	if (check_sort(*top_a)  == 0)
	// 		return ;
	// }
	// else if (check_sort(*top_a)  == 1)
	// {
	// 	rotate_a_b(top_a, 'a');
	// 	if (check_sort(*top_a)  == 0)
	// 		return ;
	// }
		
}

void sort_4(t_stack **top_a, t_stack **top_b, char s)
{
	if (check_sort(*top_a)  == 0)
		return ;
	
	// t_stack	*tmp;
	int min;
	// int 
	// tmp = *top_a;
	min = smallest(check_size(*top_a), *top_a);
	// printf ("min value: %d\n", min);
	
	while ((*top_a)->next != NULL )
	{
		rotate_a_b(top_a, s);
		// printf("sort 4: %d\n", (*top_a)->data);
		
		if ((*top_a)->data == min)
		break;
	}
	// if (top_a->data == min)
	// {
		push_a_b(top_b, top_a, 'b');
		sort_3(top_a, s);
		push_a_b(top_a, top_b, s);
	// }
}

void sort_5(t_stack **top_a, t_stack **top_b, char s)
{
	if (check_sort(*top_a)  == 0)
		return ;
	
	// t_stack	*tmp;
	int min;
	// int 
	// tmp = *top_a;
	min = smallest(check_size(*top_a), *top_a);
	// printf ("min value: %d\n", min);
	
	while ((*top_a)->next != NULL )
	{
		rotate_a_b(top_a, s);
		// printf("sort 4: %d\n", (*top_a)->data);
		
		if ((*top_a)->data == min)
		break;
	}
	// if (top_a->data == min)
	// {
		push_a_b(top_b, top_a, 'b');
		sort_4(top_a, top_b, s);
		push_a_b(top_a,top_b, s);
	// }
}