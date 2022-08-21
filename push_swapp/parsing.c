/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:18:07 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 19:02:06 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*add_at_end(t_stack *top_a, int content)
{
	t_stack	*new;
	t_stack	*tmp2;

	tmp2 = NULL;
	new = NULL;
	// new = ft_calloc(sizeof(t_stack *), 2);
	new = malloc(sizeof(t_stack));
	// new = calloc()
	if (!new)
		return (NULL);
	if (top_a == NULL)
	{
		new->index = 0;
		new->data = content;
		new->next = NULL;
		return (new);
	}
	// printf("\n\n%d\n\n", top_a->data);
	tmp2 = top_a;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp2->next = new;
	new->data = content;
	new->next = NULL;
	new->index = tmp2->index + 1;
	// printf("<<<content right here is: %d>>>\n", content);
	return (top_a);
}

// void push_swap(t_stack **top_a, int content)
// {

// 	add_at_end(top_a, content);
// 	check_character_multi_empty(top_a);
// 	// ft_atoi
// }