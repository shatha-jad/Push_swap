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
	if(all->stack_size_a > 5 && all->stack_size_a < 20)
		return (2);
	else if(all->stack_size_a >= 20 && all->stack_size_a < 50)
		return (3);
	else if(all->stack_size_a >= 50 && all->stack_size_a < 80)
		return (5);
	else if(all->stack_size_a >= 80 && all->stack_size_a < 150)
		return (8);
	else if(all->stack_size_a >= 150 && all->stack_size_a < 250)
		return (10);
	else if(all->stack_size_a >= 250 && all->stack_size_a < 400)
		return (12);
	else if(all->stack_size_a >= 400 && all->stack_size_a < 600)
		return (16);
	else if(all->stack_size_a >= 600 && all->stack_size_a < 1000)
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
		printf("stack size if %d\n", all->stack_size_a);
	else if (flag == 5)
	{
		while(++i < all->stack_size_a)
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

// void	parse_indexes(t_all *all)
// {
// 	int	i;
// 	int	d;

// 	d = all->chunk_elem_size;
// 	i = -1;
// 	all->indexes = malloc(all->chunk_size * sizeof(int));
// 	while(++i < all->chunk_size)
// 	{
// 		all->indexes[i] = all->array[d];
// 		d += all->chunk_elem_size;
// 	}
// }

void	init_struct(t_all *all, t_stack **top_a, t_stack **top_b)
{
	int		i;
	t_stack *tmp;
	
	i = -1;
	all->top_a = top_a;
	all->top_b = top_b;
	all->stack_size_a = check_size(*all->top_a);
	all->chunk_size =  get_chunk_size(all);
	all->array = malloc(all->stack_size_a * sizeof(int));
	all->stack_size_b = 0;
	// all->index_a = top_a->index;

	tmp = *all->top_a;
	while(++i < all->stack_size_a && tmp != NULL)
	{
		all->array[i] = tmp->data;
		tmp = tmp->next;
	}
	selectionSort(all->array, all->stack_size_a);
	all->chunk_elem_size = all->stack_size_a / all->chunk_size;
	// parse_indexes(all);
}

int main(int argc, char **argv)
{
	t_stack *top_a;
	t_stack *top_b;
	t_all	all;

	int i;
	char **split;
	char *args;

	i = 0;
	top_a = NULL;
	top_b = NULL;

	args = ft_strsjoin(argc, argv, " ");
	split = ft_split(args, ' ');
	if (!split[i])
		exit(0);
	while (split[i])
		top_a = add_at_end(top_a, ft_atoi(split[i++], split, top_a, args));

	init_struct(&all, &top_a, &top_b);
	initial_check_stack(&all, split, args);

	sort_all(&all);

	// if (all.stack_size_a > 5)
	// 	{
	// 		// while(all.top_a)
	// 		// {
	// 			if((*all.top_a)->data <= all.array[i+ all.chunk_size])
	// 				{
	// 					printf("HI\n");
	// 					push_a_b(all.top_b, all.top_a, 'b');
	// 				}
	// 			i++;
	// 		// }
		// }
		// all.top_a = ;
		// printf("iteration %d\n", i);
// 		ft_print(&all, CHUNK_SIZE);
// 		ft_print(&all, stack_size_a);
// printf("STACK B: %d", ((*all.top_b)->data));
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
