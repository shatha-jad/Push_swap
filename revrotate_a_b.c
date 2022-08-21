/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:11:25 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:38:09 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate_a_b(t_stack **top_a, char s)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *top_a;
	if (*top_a)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		tmp2 = tmp ->next;
		tmp->next = NULL;
		tmp2->next = *top_a;
		*top_a = tmp2;
		if (s == 'a')
			write (1, "rra\n", 4);
		else if (s == 'b')
			write (1, "rrb\n", 4);
		// else if (s == 'r')
		// 	write (1,"rrr\n",4);
		// return (*top_a);
	}
	//  return (top_a);
 }
 
// t_stack	*revrotate_a_b(t_stack *top_a)
//  {
// 	 t_stack *tmp;
// 	 t_stack *tmp2;
// 	// t_stack	*tmp3;

// 	tmp = top_a;
// 	//  while(tmp2->next != NULL)
// 	// 	tmp2 = tmp2->next;
// 	// tmp2 = tmp2->previous

// 	// printf("tmp2:  %d\n", tmp2->data);
// 	 if (top_a)
// 	 {
// 		// printf("top_a1:  %d\n", top_a->data);
// 		// tmp = malloc(sizeof(t_stack *));
// 		// if (!tmp)
// 		// 	return NULL;
// 		// tmp->data = tmp2->data;
// 		 while(tmp->next->next != NULL)
// 			tmp = tmp->next;
// 		tmp2 = tmp ->next;
// 		tmp->next = NULL;
// 		tmp2->next = top_a;
// 		top_a = tmp2;
// 		// tmp3 = tmp->next;
// 		// while (tmp3->next != NULL)
// 		// {
// 		// 	tmp = tmp3;
// 		// 	tmp3 = tmp3->next;
// 		// }
// 		// free(tmp->next);
// 		// tmp->next= NULL;
// 		// while(tmp->next->next != NULL)
// 		// tmp = tmp->next;
// 		// printf("tmp: %d\n", tmp2->data);

// 		// tmp->next = NULL;
// 		// while(tmp)
// 		// {
// 		// 	printf("tmp: %d\n", tmp->data);
// 		// 	// top_a= top_a->next;
// 		// 	tmp = tmp->next;
// 		// }
// 		return (top_a);
// 	 }
// 	 return (top_a);
//  }