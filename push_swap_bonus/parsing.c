/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:18:07 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 19:54:15 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*add_at_end(t_stack *top_a, int content)
{
	t_stack	*new;
	t_stack	*tmp2;

	tmp2 = NULL;
	new = NULL;
	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	if (top_a == NULL)
	{
		new->index = 0;
		new->data = content;
		new->next = NULL;
		return (new);
	}
	tmp2 = top_a;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp2->next = new;
	new->data = content;
	new->next = NULL;
	new->index = tmp2->index + 1;
	return (top_a);
}
