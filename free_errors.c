/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:54:01 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/08 20:15:27 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	frees(t_all *all)
{
	free(all->array);
	free(all->args);
	ft_free(all->split);
	free_stack(*all->top_a);
	free_stack(*all->top_b);
}

void	free_error_stack(t_stack *stack, t_all *all, int i)
{
	free(all->args);
	ft_free(all->split);
	free_stack(stack);
	if (i == 0 || i == 2)
		free(all->array);
	error_msg(i);
}

void	ft_free(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_stack(t_stack	*top)
{
	t_stack	*tmp;

	tmp = NULL;
	while (top != NULL)
	{
		tmp = top->next;
		free(top);
		top = tmp;
	}
}

void	error_msg(int i)
{
	if (i == 1 || i == 2)
		printf("%s\n", "ERROR");
	exit(0);
}
