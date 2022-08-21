/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:23:04 by sjadalla          #+#    #+#             */
/*   Updated: 2022/06/20 18:08:23 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_atoi(char *arg)
// {
// 	unsigned int	num;
// 	int				sign;
// 	int				i;

// 	num = 0;
// 	sign = 1;
// 	i = 0;
// 	// while (arg != NULL)
// 	// 	{
// 	// 		if (arg->data > INT_MAX || arg->data < INT_MIN)
// 	// 			printf("ERROR\n");
// 	// 		arg = arg->next;
// 	// 	}
// 	while (arg->next == 32 || (arg->next >= 9 && arg->next <= 13))
// 		i++;
// 	if (arg->next == '-')
// 		sign = -1;
// 	if (arg->next == '+' || arg->next == '-')
// 		i++;
// 	while (arg->next >= '0' && arg->next <= '9')
// 		num = num * 10 + (arg->next - 48);
// 	if (num > 2147483647 && sign == 1)
// 		return (-1);
// 	if (num > 2147483648 && sign == -1)
// 		return (0);
// 	return (num * sign);
// }

int	ft_atoi(char *str, char **split, t_stack *top, char *args)
{
	unsigned int	num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	// printf("%s\n", str);
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	// if (!*(str + i))
	// 	exit(0);
	// your atoi is trash wtffffffffffffffffffff
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '+' || *(str + i) == '-')
		i++;
	if (*(str + i) < '0' || *(str + i) > '9')
		free_error_stack(top, split, args, 1);
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + (*(str + i++) - 48);
		if (num > INT_MAX )
			free_error_stack(top, split, args, 1);
		// free_error_pars(split);
		// printf("%d\n", (*(str + i)));
	}
	if (*(str + i) != '\0')
	{
		if ((*(str + i) < '0' || *(str + i) > '9')  )		
				free_error_stack(top, split, args, 1);
			// free_error_pars(split);
	}
	// if (num > INT_MAX )
	// error_msg(1);
	// if (num > 2147483648 && sign == -1)
	// 	error_msg(1);
	return (num * sign);
}
