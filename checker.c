/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:03:59 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/04 18:34:19 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_all	all;
	int		i;

	if (argc == 1)
		return (1);
	i = 0;
	top_a = NULL;
	top_b = NULL;
	all.args = ft_strsjoin(argc, argv, " ");
	all.split = ft_split(all.args, ' ');
	if (!all.split[i])
		exit(0);
	while (all.split[i])
		top_a = add_at_end(top_a, ft_atoi(all.split[i++],
					&all, top_a));
	init_struct(&all, &top_a, &top_b);
	initial_stack_check(&all);
	sort_all(&all);
	free(all.array);
	free(all.args);
	ft_free(all.split);
	free_stack(top_a);
	free_stack(top_b);
}
