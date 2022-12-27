/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:53:09 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/27 19:06:17 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_chunk_size(t_all *all)
{
	if (all->stack_size_a <= 100)
		return (15);
	else
		return (20);
}

// void	ft_print(t_all *all, int flag)
// {
// 	int	i;

// 	i = -1;
// 	if (flag == 1)
// 	{
// 		while (*all->top_a)
// 		{
// 			printf("%d\n", (*all->top_a)->data);
// 			(*all->top_a) = (*all->top_a)->next;
// 		}
// 	}
// 	else if (flag == 2)
// 	{
// 		while (*all->top_b)
// 		{
// 			printf("%d\n", (*all->top_b)->data);
// 			(*all->top_b) = (*all->top_b)->next;
// 		}
// 	}
// 	else if (flag == 3)
// 		printf("chunk size is %d\n", all->chunk_size);
// 	else if (flag == 4)
// 		printf("stack size if %d\n", all->stack_size_a);
// 	else if (flag == 5)
// 	{
// 		while (++i < all->stack_size_a)
// 			printf("%d\n", all->array[i]);
// 	}
// }

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
	all->array_b = malloc((all->stack_size_a - 1) * sizeof(int));
	all->stack_size_b = 0;
	tmp = *all->top_a;
	while (++i < all->stack_size_a && tmp != NULL)
	{
		all->array[i] = tmp->data;
		tmp = tmp->next;
	}
	selectionsort(all->array, all->stack_size_a);
	selectionsort(all->array_b, all->stack_size_a - 1);
	all->chunk_elem_size = all->stack_size_a / all->chunk_size;
}

int	main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_all	all;
	int		i;

	i = 0;
	top_a = NULL;
	top_b = NULL;
	all.args = ft_strsjoin(argc, argv, " ");
	all.split = ft_split(all.args, ' ');
	if (!all.split[i])
		exit(0);
	while (all.split[i])
		top_a = add_at_end(top_a, ft_atoi(all.split[i++],
					all.split, top_a, all.args));
	init_struct(&all, &top_a, &top_b);
	initial_check_stack(&all, all.split, all.args);
	sort_all(&all);
	free(all.array);
	free(all.args);
	ft_free(all.split);
	free_stack(top_a);
	free_stack(top_b);
}
