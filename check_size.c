/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:17:04 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/13 16:28:00 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_size(t_stack *top_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = top_a;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	// printf("%d\n", i);
	return (i);
}
