/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:42:14 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/29 20:04:28 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// #include <stdio.h>
// #include <stdlib.h>

// void sort(t_all *all)
// {
// 	int median_data;
// 	int median_index;
// 	int max;
// 	// t_stack *tmp;
// 	// t_stack *tmp2;

// 	// tmp = NULL;
// 	median_data = stack_median(*top_a, check_size(*top_a), 'd');
// 	median_index = stack_median(*top_a, check_size(*top_a), 'i');

// 	printf("Data at median: %d\nIndex of median: %d\n", median_data, median_index);
// 	while ((*top_a)->index < median_index)
// 		push_a_b(all->top_b, all->top_a, 'a', all);
// 	// max = largest(check_size(*top_b), *top_b);
// 	// printf("max: %d\ntop_b: %d\n", max, (*top_b)->data);
// 	while((all->top_a) != NULL)
// 	{
// 		max = largest(check_size(*top_b), *top_b);
// 		while ((*top_b)->data != max)
// 		{
// 			rotate_a_b(top_b, 'b');
// 		}
// 			push_a_b(all->top_a,all->top_b,'a', all);
// 			// printf("top_a: %d\ntop_b: %d\n",(*top_a)->data, (*top_b)->data);
// 	}
// }

// #include <alloc.h>
// Part of Cosmos by OpenGenus Foundation
// struct btreenode
// {
//     struct btreenode *leftchild ;
//     int data ;
//     struct btreenode *rightchild ;
// } ;
// void insert ( struct btreenode **, int ) ;
// void inorder ( struct btreenode * ) ;
// void main( )
// {
//     struct btreenode *bt ;
//     int arr[10] = { 11, 2, 9, 13, 57, -25, 17, 1, 90, 3 } ;
//     int i ;
//     bt = NULL ;
//     printf ( "Binary tree sort.\n" ) ;
//     printf ( "\nArray:\n" ) ;
//     for ( i = 0 ; i <= 9 ; i++ )
//         printf ( "%d\t", arr[i] ) ;
//     for ( i = 0 ; i <= 9 ; i++ )
//         insert ( &bt, arr[i] ) ;
//     printf ( "\nIn-order traversal of binary tree:\n" ) ;
//     inorder ( bt ) ;
// }

// void insert	(t_stack **top_a, t_stack **top_b, int num)
// {
// 	t_stack *tmp;
// 	tmp = *top_a;
// 	// t_stack *tmp2;
// 	// tmp2 = tmp;
// 	// while(tmp2)
// 	// {
// 	// 	printf("Content is %d at index %d\n", tmp2->data, tmp2->index);
// 	// 	tmp2 = tmp2->next;
// 	// }
// 	while (tmp->next != NULL)
// 	{
// 		if (num < (tmp->data))
// 		{
// 			printf("num < tmp:%d\n", tmp->data);
// 			push_a_b(top_b, &tmp, 'b');
// 			tmp = tmp->next;
// 		}
// 		else if (num > (tmp->data))
// 		{
// 			tmp = tmp->next;
// 			printf("num > tmp:%d\n", tmp->data);
// 		}
// 		// printf("num:%d\n", tmp->data);
// 	}
// }
// void insert ( struct btreenode **sr, int num )
// {
//     if ( *sr == NULL )
//     {
//         *sr = malloc ( sizeof ( t_stack) + 1) ;
//         ( *sr ) -> leftchild = NULL ;
//         ( *sr ) -> data = num ;
//         ( *sr ) -> rightchild = NULL ;
//     }
//     else
//     {
//         if ( num < ( *sr ) -> data )
//             insert ( &( ( *sr ) -> leftchild ), num ) ;
//         else
//             insert ( &( ( *sr ) -> rightchild ), num ) ;
//     }
// }

// void inorder ( struct btreenode *sr )
// {
//     if ( sr != NULL )
//     {
//         inorder ( sr -> leftchild ) ;
//         printf ( "%d\t", sr -> data ) ;
//         inorder ( sr -> rightchild ) ;
//     }
// }

// void sort(t_stack **top_a, t_stack **top_b)
// {
// 	int	index;
// 	int	num;

// 	index = 0;
// 	num = 3;
// 	while (top_a)
// 	{
// 		if ((*top_a)->index <= index && index > 1)
// 		{
// 			push_a_b(top_b, top_a, 'b');
// 			rotate_a_b(top_b, 'b');
// 			index++;
// 		}
// 		if ((*top_a)->index <= index + num)
// 			{ 
// 				push_a_b(top_b, top_a, 'a');
// 				index++;
// 			}
// 		if ((*top_a)->index >= index)
// 			rotate_a_b(top_a, 'a');
// 	}
// }

// void	sort1(t_stack **top_a, t_stack **top_b)
// {
// 	int	max;

// 	max = largest(check_size(top_a), top_b);
// 	while (top_b)
// 	{
// 		if ((*top_b)->data == max)

// 	}

// }

// void sort_100(t_stack **top_a, t_stack **top_b)
// {}