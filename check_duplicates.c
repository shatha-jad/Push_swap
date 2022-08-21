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
	// t_stack	*current;

	original = str;
	nextt = NULL;
	// current = NULL;
	if (str == NULL)
		return ;
	else
	{
		while (original)
		{
			// current = original;
			nextt = original -> next;
			while (nextt)
			{
				if (nextt->data == original->data)
					// original->next = nextt->next;
					// current->next = nextt->next;
					{
						free_error_stack(str, split, args, 1);
						// error_msg(1);
					}
				else
					// original = nextt;
					// current = nextt;
				nextt = nextt->next;
			}
			original = original->next;
		}
	}
}


// char	*ft_strstr(int *str, int *to_find, int k)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	if (to_find[i] == '\0')
// 		return (str);
// 	while (str[i] != '\0')
// 	{
// 		j = k;
// 		while (str[i + j] == to_find[j] && str[i + j] != '\0')
// 		{
// 			j++;
// 			if (to_find[j] == '\0')
// 				;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// void check_dup(int *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*str)
// 	{
// 		ft_strstr(*str, str[i], i);
// 		i++;
// 	}
// }
