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

int	get_chunk_size(t_all *all)
{
	if(all->stack_size > 5 && all->stack_size < 20)
		return (2);
	else if(all->stack_size >= 20 && all->stack_size < 50)
		return (3);
	else if(all->stack_size >= 50 && all->stack_size < 80)
		return (5);
	else if(all->stack_size >= 80 && all->stack_size < 150)
		return (8);
	else if(all->stack_size >= 150 && all->stack_size < 250)
		return (10);
	else if(all->stack_size >= 250 && all->stack_size < 400)
		return (12);
	else if(all->stack_size >= 400 && all->stack_size < 600)
		return (16);
	else if(all->stack_size >= 600 && all->stack_size < 1000)
		return (20);
	else
		return(50);
}

void	ft_print(t_all *all, int flag)
{
	int	i;

	i = -1;
	if(flag == 1)
	{
		while(*all->top_a)
		{
			printf("%d\n", (*all->top_a)->data);
			(*all->top_a) = (*all->top_a)->next;
		}
	}
	else if(flag == 2)
	{
		while(*all->top_b)
		{
			printf("%d\n", (*all->top_b)->data);
			(*all->top_b) = (*all->top_b)->next;
		}
	}
	else if(flag == 3)
		printf("chunk size is %d\n", all->chunk_size);
	else if(flag == 4)
		printf("stack size if %d\n", all->stack_size);
	else if (flag == 5)
	{
		while(++i < all->stack_size)
			printf("%d\n", all->array[i]);
	}

}

void ft_swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // ft_swap the found minimum element with the first element
           if(min_idx != i)
            ft_swap(&arr[min_idx], &arr[i]);
    }
}

void	init_struct(t_all *all, t_stack **top_a, t_stack **top_b)
{
	int		i;
	t_stack *tmp;
	
	i = -1;
	all->top_a = top_a;
	all->top_b = top_b;
	all->stack_size = check_size(*all->top_a);
	all->chunk_size =  get_chunk_size(all);
	all->array = malloc(all->stack_size * sizeof(int));
	tmp = *all->top_a;
	while(++i < all->stack_size && tmp != NULL)
	{
		all->array[i] = tmp->data;
		tmp = tmp->next;
	}
	selectionSort(all->array, all->stack_size);
}

int main(int argc, char **argv)
{
	t_stack *top_a;
	t_stack *top_b;
	t_all	all;
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
	// printf("args:%s\n", args);
	split = ft_split(args, ' ');
	if (!split[i])
		exit(0);
	while (split[i])
		top_a = add_at_end(top_a, ft_atoi(split[i++], split, top_a, args));
	initial_check_stack(top_a, top_b, split, args);

	init_struct(&all, &top_a, &top_b);
	ft_print(&all, ARRAY);
	// int median;
	// int size;
	// int mean;
	// size = check_size(top_a);
	// median = stack_medians(top_a);
	// mean = stack_mean(top_a);
	// printf("size: %d   median: %d mean: %d\n\n", size, median, mean);

	// if (size > 5)
	// sort_100(&top_a, &top_b);

	// reset_index(top_a);
	// reset_index(top_b);
	// printf("\ntop_b:\n");
	// t_stack *tmp2;
	// tmp2 = top_b;
	// while (tmp2)
	// {
	// 	printf("Content is %d at index %d\n", tmp2->data, tmp2->index);
	// 	tmp2 = tmp2->next;
	// }
	// printf("top_a:\n");
	// t_stack *tmp;
	// tmp = top_a;
	// while (tmp)
	// {
	// 	printf("Content is %d at index %d\n", tmp->data, tmp->index);
	// 	tmp = tmp->next;
	// }
	free(all.array);
	free(args);
	ft_free(split);
	free_stack(top_a);
	free_stack(top_b);
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
