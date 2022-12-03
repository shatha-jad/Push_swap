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

int	ft_atoi(char *str, char **split, t_stack *top, char *args)
{
	unsigned int	num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	while (*(str + i) == 32 || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
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
	}
	if (*(str + i) != '\0')
	{
		if ((*(str + i) < '0' || *(str + i) > '9')  )		
				free_error_stack(top, split, args, 1);
	}
	return (num * sign);
}
