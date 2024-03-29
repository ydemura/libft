/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliia <yuliia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:12:36 by ydemura           #+#    #+#             */
/*   Updated: 2023/09/05 13:31:27 by yuliia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup_till_n(const char *s1, int len, t_memory *memory)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
	{
		memory->status = -1;
		return (0);
	}
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

void	after_n_memcpy(char *left, char *temp, unsigned int n)
{
	unsigned int	j;

	n++;
	j = 0;
	while (temp[n] != '\0')
	{
		left[j] = temp[n];
		j++;
		n++;
	}
	left[j] = '\0';
}

char	*ft_realloc(char **line, int new_len, t_memory *memory)
{
	char	*new_line;

	if (!*line)
	{
		new_line = malloc((new_len + 1) * sizeof(char));
		if (!new_line)
			memory->status = -1;
		return (new_line);
	}
	new_line = malloc((new_len + 1) * sizeof(char));
	if (!new_line)
	{
		memory->status = -1;
	}
	return (new_line);
}

char	*ft_strjoin_realloc(char *s1, t_memory *memory)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s2 = ft_realloc(&s1, (ft_strlen(memory->left) + ft_strlen(s1)), memory);
	if (!s2)
		return (0);
	while (s1 != 0 && s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	while (*(memory->left) != 0 && memory->left[j] != '\0')
	{
		s2[i] = memory->left[j];
		i++;
		j++;
	}
	s2[i] = '\0';
	free(s1);
	return (s2);
}
