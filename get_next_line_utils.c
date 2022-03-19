/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:20:39 by tapetros          #+#    #+#             */
/*   Updated: 2021/02/16 19:20:40 by tapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin_hamzachiman(char *memory, char *buffer)
{
	char	*join;
	int		i;
	int		j;

	if (!(join = malloc(sizeof(char) *
					(ft_strlen(memory) + ft_strlen(buffer) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	if (memory)
		while (memory[i] != '\0')
			join[j++] = memory[i++];
	i = 0;
	if (buffer)
		while (buffer[i] != '\0')
			join[j++] = buffer[i++];
	join[j] = '\0';
	free(memory);
	return (join);
}
