/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:00:58 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/07 19:00:46 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_stack **list, t_stack **node)
{
	t_stack	*tmp;

	if (*node == NULL)
		return ;
	tmp = *node;
	*node = (*node)->next;
	tmp->next = *list;
	*list = tmp;
}
