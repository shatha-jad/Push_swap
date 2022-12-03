/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:01:06 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:10:16 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_stack *str, char **split, char *args)
{
	t_stack	*original;
	t_stack	*nextt;

	original = str;
	nextt = NULL;
	if (str == NULL)
		return ;
	else
	{
		while (original)
		{
			nextt = original -> next;
			while (nextt)
			{
				if (nextt->data == original->data)
						free_error_stack(str, split, args, 1);
				else
				nextt = nextt->next;
			}
			original = original->next;
		}
	}
}