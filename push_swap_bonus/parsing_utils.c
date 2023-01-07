/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:28:16 by sjadalla          #+#    #+#             */
/*   Updated: 2022/12/25 19:53:56 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (count * size));
	return (ptr);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

int	ft_strlens(int ac, char **av, char *sep)
{
	int	i;
	int	j;
	int	b;

	b = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		b += j;
		i++;
	}
	b += (ft_strlen (sep) * ac) - ft_strlen (sep);
	return (b);
}

char	*ft_strsjoin(int ac, char **av, char *sep)
{
	int		i;
	int		b;
	int		j;
	int		d;
	char	*tmp;

	i = 0;
	tmp = ft_calloc ((ft_strlens (ac, av, sep)) + 1, 1);
	b = 0;
	while (++i < ac)
	{
		j = 0;
		d = 0;
		while (av[i][j] != '\0')
			tmp[b++] = av[i][j++];
		while (sep[d] != '\0')
			tmp[b++] = sep[d++];
	}
	tmp[b] = '\0';
	return (tmp);
}
