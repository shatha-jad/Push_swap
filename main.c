/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:53:09 by sjadalla          #+#    #+#             */
/*   Updated: 2022/07/17 17:44:31 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *top_a;
	t_stack *top_b;
	// struct btreenode *bt;

	int i;
	char **split;
	char *args;

	i = 0;
	// bt = NULL;
	top_a = NULL;
	top_b = NULL;
	// if (argc < 2)
	// 	error_msg(1);
	args = ft_strsjoin(argc, argv, " ");
	printf("args:%s\n", args);
	split = ft_split(args, ' ');
	if (!split[i])
		exit(0);
	while (split[i])
		top_a = add_at_end(top_a, ft_atoi(split[i++], split, top_a, args));
	initial_check_stack(top_a, top_b, split, args);
	// printf("\n %d \n\n", check_size(top_a));
	// for ( i = 0 ; i <= (check_size(top_a) - 1) ; i++ )
	// {
	//     insert ( &bt, top_a->data ) ;
	// 	top_a = top_a->next;
	// }
	// insert(&top_a, &top_b, 3);
	// inorder ( bt ) ;
	// int median;
	// median = stack_median(top_a, check_size(top_a));
	// printf("median size: %d\n\n", median);
	// sort_100(&top_a, &top_b);
	// printf("data at top_a: %d\n", top_a->data);
	// rotate_a_b(&top_a, 'r');
	// printf("data at top_a: %d\n", top_a->data);
	int median;
	int size;
	int mean;
	int j;
	j = 0;
	size = check_size(top_a);
	median = stack_medians(top_a);
	mean = stack_mean(top_a);
	printf("size: %d   median: %d mean: %d\n\n", size, median, mean);
	t_stack *sort;
	sort = bubbleSort(&top_a, check_size(top_a));
	printf ("sorted by bubble sort:\n");
		reset_index(sort);
	while (sort != NULL)
	{
		printf("sorted data: %d   sorted index: %d\n", sort->data, sort->index);
		sort = sort->next;
	}
	if (size > 5)
	sort_100(&top_a, &top_b);
	// reset_index(top_a);
	// reset_index(top_b);
	printf("\ntop_b:\n");
	t_stack *tmp2;
	tmp2 = top_b;
	while (tmp2)
	{
		printf("Content is %d at index %d\n", tmp2->data, tmp2->index);
		tmp2 = tmp2->next;
	}
	printf("top_a:\n");
	t_stack *tmp;
	tmp = top_a;
	while (tmp)
	{
		printf("Content is %d at index %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
	free(args);
	ft_free(split);
	free_stack(top_a);
	// free_stack(top_b);
}

// int	main(int argc, char **argv)
// {
// 	t_stack	*top_a;
// 	t_stack *top_b;
// 	int		i;
// 	// int 	j;
// 	char 	**split;
// 	char	*args;

// 	// j = 1;
// 	i = 0;
// 	top_a = NULL;
// 	top_b = NULL;
// 	if (argc < 2)
// 		error_msg(1);

// 	// while (argv[j])
// 		// args = ft_strjoin(args, argv[j++]);
// 	args = ft_strsjoin(argc, argv, " ");
// 	printf("args:%s\n", args);
// 	// j = 0;
// 	split = ft_split(args, ' ');
// 	if (!split[i])
// 		exit(0);
// 	// while (split[i] != NULL)
// 	// 	printf("split:%s\n", split[i++]);
// 	// while (argv[j])
// 	// {
// 	// 	i = 0;
// 			// printf("%s\n", split[i])
// 		// if (split[i])
// 		// {
// 			while (split[i])
// 			top_a = add_at_end(top_a, ft_atoi(split[i++], split, top_a, args));
// 		// }
// 		// else
// 		// 	top_a = add_at_end(top_a, ft_atoi(argv[i++], split, top_a));
// 		// j++;
// 		// ft_free(split);
// 		// printf("%d\n", j);
// 	// }
// 	// while(split[i])
// 	// {
// 	// 	top_a = add_at_end(top_a, ft_atoi(split[i]));
// 	// 	// printf("%s\n", ft_split(argv[i], ' '));
// 	// 	printf("%d\n", ft_atoi(split[i]));
// 	// 	i++;
// 	// }
// 	// check_character_multi_empty(top_a);
// 	check_dup(top_a, split, args);
// 	// check_size(top_a);
// 	// check_size(top_b);

// 	if (check_sort(top_a) == 0)
// 	{
// 		// printf("stack is sorted\n");
// 		// free (args);
// 		free_error_stack(top_a, split, args, 0);
// 	}
// 	// else if (check_sort(top_a) == 1)
// 	// 	printf("stack is not sorted\n");
// 	//  swap_a_b(top_b, 's');

// 	// top_a = revrotate_a_b (top_a, 'r');
// 	// revrotate_a_b (&top_a, 'r');

// 	// rotate_a_b(&top_a, 'r');
// 	// rotate_a_b(&top_a, 'r');
// 	// // top_a = rotate_a_b(top_a, 's');

// 	// // top_a = push_a_b(top_a, top_b, 'a');
// 	// // top_b = push_a_b(top_b, top_a, 'a');
// 	// push_a_b(&top_b, &top_a, 'a');
// 	// push_a_b(&top_b, &top_a, 'a');
// 	// // top_a = push_a_b(top_a, 9, 'a');

// 	// ss(&top_a, &top_b);
// 	// rr(&top_a, &top_a);
// 	// rrr(&top_a, &top_a);
// 	// check_size(top_a);
// 	// check_size(top_b);

// 	// smallest(3, top_a);
// 	// largest(3, top_a);
// 	// if (check_size(top_a) == 3)
// 	// 	sort_3(&top_a);
// 	if (check_size(top_a) <= 5)
// 		sort_lessthan_5(&top_a, &top_b, 'a');
// 	// sort(&top_a, &top_b);
// 	reset_index(top_a);
// 	// reset_index(top_b);
// 	// stack_b(&top_b, top_a);
// // 	printf("top_b:\n");
// // 	t_stack *tmp2;
// // 	tmp2 = top_b;
// // while(tmp2)
// // 	{
// // 		printf("Content is %d at index %d\n", tmp2->data, tmp2->index);
// // 		tmp2 = tmp2->next;
// // 	}
// 	printf("top_a:\n");
// 	t_stack *tmp;
// 	tmp = top_a;
// 	while(tmp)
// 	{
// 		printf("Content is %d at index %d\n", tmp->data, tmp->index);
// 		tmp = tmp->next;
// 	}
// free(args);
// ft_free(split);
// free_stack(top_a);
// free_stack(top_b);
// }
