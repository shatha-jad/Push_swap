/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:54:01 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:12:28 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	free_error_pars(char **split )
// {
// 	ft_free(split);
// 	printf("Error in parsing\n");
// 	error_msg(1);
// 	// free_stack(stack);
// 	// error_msg(1);
// }

void free_error_stack(t_stack *stack, char **split, char *args, int i)
{
		free (args);
		ft_free(split);
		free_stack(stack);
		// printf("Error in stack\n");
		error_msg(i);
}

void	ft_free(char **tab)
{
	unsigned int	i;
	i = 0;
	while (tab[i])
	{
		// printf("%s is freed\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	// return (NULL);
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
	if (i == 1)
		printf("%s\n", "ERROR");
	exit(0);
	// return ;
}
