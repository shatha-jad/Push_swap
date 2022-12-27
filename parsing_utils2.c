/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:32:08 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 19:54:03 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	reset_index(t_stack *top_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	tmp = top_a;
	while (tmp != NULL)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}
