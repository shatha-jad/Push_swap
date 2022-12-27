/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:51:54 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 19:44:04 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	check_character_multi_empty(t_stack	*arg)
// {
// 	int	i;

// 	i = 0;
// 	while (arg->next != NULL)
// 	{
// 		if ((arg->data >= '0' && arg->data <= '9') || (arg->data == ' ') || (arg->data == '-') || (arg->data == '+'))
// 		{
// 			arg = arg->next;
// 			printf("%s\n", "HIIIIIII");
// 		}
// 		else
// 		{
// 			printf("ERROR MSG\n");
// 			error_msg(1);
// 		}
// 		if (arg->data == '-' && (arg->next->data >= '0' || arg->next->data <= '9'))
// 			arg = arg->next ;
// 		else if (arg->data == '+' && (arg->next->data >= '0' || arg->next->data <= '9'))
// 			arg = arg->next ;
// 		else 
// 					error_msg(1);
// 	}
// }