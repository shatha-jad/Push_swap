/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:10:45 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/30 19:44:47 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_b(t_stack **top_a, char s)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;

	if ((*top_a)->next == NULL)
		return ;
	tmp = *top_a;
	tmp3 = (*top_a)->next;
	tmp2 = *top_a;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp2 = tmp2->next;
	tmp2->next = NULL;
	tmp2 = tmp3;
	// tmp2 = tmp2;
// 	while (tmp2 != NULL)
//  {
//  	printf("tmp2: %d\n", tmp2->data);
//  	tmp2 = tmp2->next;
//  }
	if (s == 'a')
		write (1, "ra\n", 3);
	else if (s == 'b')
		write (1, "rb\n", 3);
	*top_a = tmp2;
	
	// else if (s == 'r')
	// 	write (1,"rr\n", 3);
	// return (tmp2);	
}

// t_stack	*rotate_a_b(t_stack *top_a, char s)
// {
// 	t_stack	*tmp;
// 	// t_stack	*tmp2;
// 	t_stack	*tmp3;
	
// 	tmp = top_a;

// 	tmp3 = top_a->next;
// 	// tmp2 = top_a; 

// 	while (top_a->next != NULL)
// 		top_a = top_a->next;
// 	top_a->next = tmp;

// 	top_a = top_a->next;
// 	top_a->next = NULL;
// 	top_a = tmp3;
// 	// top_a = top_a;
// // 	while (top_a != NULL)
// //  {
// //  	printf("top_a: %d\n", top_a->data);
// //  	top_a = top_a->next;
// //  }
// 	if (s == 'a')
// 		write (1,"ra\n", 3);
// 	else if (s == 'b')
// 		write (1,"rb\n",3);
// 	// else if (s == 'r')
// 	// 	write (1,"rr\n", 3);
// 	return (top_a);	
// }








// t_stack	*rotate_a_b(t_stack *top_a)
// {
// 	t_stack	*tmp;
// 	t_stack	*tmp2;
// 	t_stack	*tmp3;
	
// 	tmp = top_a;
// 	// tmp2 = tmp->next;
// 	// tmp3 = top_a->next;
// 	tmp3 = top_a->next;
// 	tmp2 = top_a; 
	
// 	// tmp = malloc(sizeof(size_t *));
// 	// if (!tmp)
// 	// 	return NULL;
	
// 	// tmp->data = tmp2->next->data;
// 	// tmp->next = NULL;
// 	while (tmp2->next != NULL)
// 		tmp2 = tmp2->next;
// 	tmp2->next = tmp;
// 	// tmp->previous = tmp2;
// 	tmp2=tmp2->next;
// 	tmp2->next = NULL;
// 	tmp2 = tmp3;
		
// 	// tmp ->next = NULL;
// 	// tmp3 = malloc(sizeof(t_stack *));
// 	// if (!tmp3)
// 	// 	return NULL;
// 	// tmp3 = tmp;
// 	// while (tmp2->next != NULL)
// 	// {
// 	// 	printf("tmp2: %d\n", tmp2->data);

// 	// 	// tmp3->next = tmp2->next;
// 	// 	tmp2 = tmp2->next;
// 	// }
// 	// tmp3->next = NULL;

// 	// while(tmp2->next != NULL)
// 	// 	tmp2 = tmp2->next;
// 	// tmp->next = NULL;
// 	// tmp2->next = tmp;
// 	// tmp2 = tmp;
// 	// 	printf("tmp: %d\n", tmp->next->data);
// 	// printf("tmp3: %d\n", tmp3->data);

// 	// printf("tmp2: %d\n", tmp2->data);
// 	// while(tmp3)
// 	// 	{
// 	// 		printf("tmp3: %d\n", tmp3->data);
// 	// 		// top_a= top_a->next;
// 	// 		tmp3 = tmp3->next;
// 	// 	}
// 	// while(tmp2->next != NULL)
// 	// 	{
// 	// 		printf("tmp2: %d\n", tmp2->data);
// 	// 		// top_a= top_a->next;
// 	// 		tmp2 = tmp2->next;
// 	// 	}
		
// 	return (tmp2);
	
// }