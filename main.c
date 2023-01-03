/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:53:09 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/03 14:48:26 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_chunk_size(t_all *all)
{
	if (all->stack_size_a <= 150)
		return (15);
	else
		return (30);
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
	all->chunk_size = get_chunk_size(all);
	all->array = malloc(all->stack_size_a * sizeof(int));
	all->stack_size_b = 0;
	tmp = *all->top_a;
	while (++i < all->stack_size_a && tmp != NULL)
	{
		all->array[i] = tmp->data;
		tmp = tmp->next;
	}
	selectionsort(all->array, all->stack_size_a);
	all->chunk_elem_size = all->stack_size_a / all->chunk_size;
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
	initial_check_stack(&all);
	sort_all(&all);
	free(all.array);
	free(all.args);
	ft_free(all.split);
	free_stack(top_a);
	free_stack(top_b);
}
