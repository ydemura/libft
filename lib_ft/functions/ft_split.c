/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydemura <ydemura@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:04:16 by ydemura       #+#    #+#                 */
/*   Updated: 2020/11/01 09:55:08 by ydemura       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_delimetr_count(char const *s, char c)
{
	int		result;

	result = 0;
	while (*s != 0)
	{
		if (*s == c)
		{
			result++;
		}
		s++;
	}
	return (result);
}

int		ft_subsstr_until_char(char **substring, const char **start, char c)
{
	const char	*end;

	end = *start;
	while (*end != 0 && *end != c)
		end++;
	*substring = malloc(((end - *start) + 1) * sizeof(char));
	if (*substring == NULL)
		return (0);
	ft_memcpy(*substring, *start, end - *start);
	*start = end + 1;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		n_substrings;
	int		i_substrings;
	char	**results;

	i_substrings = 0;
	n_substrings = ft_delimetr_count(s, c) + 1;
	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
	if (results == NULL)
		return (NULL);
	while (i_substrings < n_substrings)
		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
			i_substrings++;
		else
		{
			while (i_substrings >= 0)
			{
				free(results[i_substrings]);
				i_substrings--;
			}
			free(results);
			return (NULL);
		}
	results[n_substrings] = NULL;
	return (results);
}
