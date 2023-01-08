/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:01:04 by sjadalla          #+#    #+#             */
/*   Updated: 2023/01/08 19:59:03 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h> 
#include "get_next_line.h"

char	*ft_read(int fd, char *static_var)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while ((!ft_strchr(static_var, '\n') && (bytes_read != 0)))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		static_var = ft_strjoin(static_var, buffer);
	}
	free(buffer);
	return (static_var);
}

char	*ft_get_line(char *static_var)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!static_var[i])
		return (NULL);
	while (static_var[i] != '\0' && static_var[i] != '\n')
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 2));
	if (!tmp)
		return (NULL);
	i = 0;
	while (static_var[i] && static_var[i] != '\n')
	{
		tmp[i] = static_var[i];
		i++;
	}
	if (static_var[i] == '\n')
	{
		tmp[i] = static_var[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_save(char *static_var)
{
	int		i;
	int		n;
	char	*next_text;

	i = 0;
	n = 0;
	while (static_var[i] && static_var[i] != '\n')
		i++;
	if (!static_var[i])
	{
		free(static_var);
		return (NULL);
	}
	next_text = (char *)malloc(sizeof(char) * (ft_strlen(static_var) - i + 1));
	if (!next_text)
		return (NULL);
	i++;
	while (static_var[i])
		next_text[n++] = static_var[i++];
	next_text[n] = '\0';
	free(static_var);
	return (next_text);
}

char	*get_next_line(int fd)
{
	static char		*static_var;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_var = ft_read(fd, static_var);
	if (!static_var)
		return (NULL);
	next_line = ft_get_line (static_var);
	static_var = ft_save(static_var);
	return (next_line);
}
