/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:03:59 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 20:35:26 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	op_rev(char	*str, t_all	*all)
{
	if (strncmp(str, "sa\n", 3) == 0)
		swap_a_b(*all->top_a);
	else if (strncmp(str, "sb\n", 3) == 0)
		swap_a_b(*all->top_b);
	else if (strncmp(str, "rb\n", 3) == 0)
		rotate_a_b(all->top_b);
	else if (strncmp(str, "ra\n", 3) == 0)
		rotate_a_b(all->top_a);
	else if (strncmp(str, "rrb\n", 3) == 0)
		revrotate_a_b(all->top_b);
	else if (strncmp(str, "rra\n", 3) == 0)
		revrotate_a_b(all->top_a);
	else if (strncmp(str, "pb\n", 3) == 0)
		push_a_b(all->top_b, all->top_a);
	else if (strncmp(str, "pa\n", 3) == 0)
		push_a_b(all->top_a, all->top_b);
	else if (strncmp(str, "rr\n", 3) == 0)
		rr(all->top_a, all->top_b);
	else if (strncmp(str, "rrr\n", 3) == 0)
		rrr(all->top_a, all->top_b);
	else if (strncmp(str, "ss\n", 3) == 0)
		ss(all->top_a, all->top_b);
	else
		return (0);
	return (1);
}

int	rev_eng(t_all *all)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (op_rev(str, all) == 0)
		{
			printf("ERROR\n");
			frees(all);
			free(str);
			exit(1);
		}
		free(str);
	}
	if (check_sort(*all->top_a) == 0 && *all->top_b == NULL)
		printf("OK\n");
	else
		printf("KO\n");
	return (EXIT_SUCCESS);
}

void	init_struct(t_all *all, t_stack **top_a, t_stack **top_b)
{
	int		i;
	t_stack	*tmp;

	i = -1;
	all->top_a = top_a;
	all->top_b = top_b;
	all->stack_size_a = check_size(*all->top_a);
	all->stack_size = all->stack_size_a;
	all->array = malloc(all->stack_size_a * sizeof(int));
	all->stack_size_b = 0;
	tmp = *all->top_a;
	while (++i < all->stack_size_a && tmp != NULL)
	{
		all->array[i] = tmp->data;
		tmp = tmp->next;
	}
	selectionsort(all->array, all->stack_size_a);
}

int	main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_all	all;
	int		i;

	if (argc == 1)
		return (1);
	i = 0;
	top_a = NULL;
	top_b = NULL;
	all.args = ft_strsjoin(argc, argv, " ");
	all.split = ft_split(all.args, ' ');
	if (!all.split[i])
		exit(0);
	while (all.split[i])
		top_a = add_at_end(top_a, ft_atoi(all.split[i++],
					&all, top_a));
	init_struct(&all, &top_a, &top_b);
	check_dup(*all.top_a, &all);
	rev_eng(&all);
	frees(&all);
}
