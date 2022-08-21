/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:00:58 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:37:15 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_stack **list, t_stack **node, char s)
{
	t_stack	*tmp;
	
	tmp = *node;
	if (*node == NULL)
		return ;
	*node = (*node)->next;
	tmp->next = *list;
	*list = tmp;
	if (s == 'a')
		write (1, "pa\n", 3);
	else if (s == 'b')
		write (1, "pb\n", 3);
}

// void	push_a_b(t_stack **list, t_stack **node, char s)
// {
// 	t_stack	*tmp;
// 	// t_stack	*tmp2;
// 	//  tmp->previous = list;
// 	// tmp = NULL;
// 	tmp = *node;
// 	if (*node == NULL)
// 		return ;
// 	// tmp = malloc(sizeof(t_stack *));
// 	// if (!tmp)
// 		// return ;
// 	*node = (*node)->next;
// 	tmp->next = *list;
// 	// tmp->data = (*node)->data;
// 	// tmp->next = tmp2;
// 	// tmp->next = (*list);
// 	*list = tmp;
// 	// *node = (*node)->next;
// 	if (s == 'a')
// 		write (1, "pa\n", 3);
// 	else if (s == 'b')
// 		write (1, "pb\n", 3);
// }
	
// t_stack	*push_a_b(t_stack *top_a, t_stack *top_b, char s)
//  {
// 	 t_stack *tmp;
// 	 t_stack *tmp2;
// 	//  tmp->previous = top_a;
	 
// 	 tmp = NULL;
// 	 if (top_b != NULL)
// 	 {
// 		tmp = malloc(sizeof(t_stack *));
// 		if (!tmp)
// 			return NULL;
// 		tmp->data = top_b->data;
// 		tmp->next = top_a;
// 		if (s == 'a')
// 			write (1,"pa\n", 3);
// 		else if (s == 'b')
// 			write (1,"pb\n", 3);
// 		return (tmp);
// 	 }	
// 	 else 
// 		return (top_a);
//  }

 
//  t_stack	*push_a_b(t_stack *top_a, int b, char s)
//  {
// 	 t_stack *tmp;
// 	 t_stack *tmp2;
// 	//  tmp->previous = top_a;
	 
// 	 tmp = NULL;
// 	 if (b != 0)
// 	 {
// 		tmp = malloc(sizeof(t_stack *));
// 		if (!tmp)
// 			return NULL;
// 		tmp->data = b;
// 		tmp->next = top_a;
// 		if (s == 'a')
// 			write (1,"pa\n", 3);
// 		else if (s == 'b')
// 			write (1,"pb\n", 3);

// 		return (tmp);
// 	 }
// 	 return (top_a);
	
//  }

//  t_stack	*push_a_b(t_stack *top_a, int b)
//  {
// 	 t_stack *tmp;
	 
// 	 tmp = NULL;
// 	//  tmp = top_a;
// 	 if (b != 0)
// 	 {
// 		tmp = malloc(sizeof(t_stack *));
// 		if (!tmp)
// 			return NULL;
// 		tmp->data = b;
// 		tmp->next = top_a;
// 		return (tmp);
// 		// tmp->next = NULL;
// 	 }
// 	 return (top_a);
// 	//  while (top_a)
// 	//  {
// 	// 	tmp->next->data = top_a->data;
// 	// 	tmp = tmp->next;
// 	// 	top_a = top_a->next; 
// 	//  }
//  }
// // void	push_a_b(t_stack *top_a)
// // {
// // 	int	tmp;
// // 	t_stack *topp;
	
// // 	topp = top_a;
// // 	if (!top_a)
// // 		return;
// // 	while (topp)
// // 		{
						
// // 			tmp = topp->next->data;
// // 			topp->next->data = topp->data;
// // 			printf("%d\n", top_a->data);
// // 			topp = topp->next;
// // 			// topp->next->data = tmp ;
// // 			// push_a_b(topp); 
// // 		}
// // }
