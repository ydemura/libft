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

int		ft_char_count(char const *s, char c)
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

int	ft_subsstr_until_char(char **substring, const char **start, char c)
{
	const char *end;

	end = *start;
	while (*end != 0 && *end != c)
		end++;
	*substring = malloc((end - *start + 1) * sizeof(char));
	if (*substring == NULL)
		return (0);
	ft_memcpy(*substring, *start, end - *start);
	*start = end + 1;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int			n_substrings;
	int			i_substrings;
	char		**results;

	i_substrings = 0;
	n_substrings = ft_char_count(s, c) + 1;
	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
	if (results == NULL)
		return (NULL);
	while (i_substrings < n_substrings)
		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
			i_substrings++;
		else
		{
			while (i_substrings >= 0)
				free(results[i_substrings--]);
			free(results);
			return (NULL);
		}
	results[n_substrings] = NULL;
	return (results);
}


//char	**ft_split(char const *s, char c)
//{
//	int			delimeter_n;
//	int 		next_res_indx;
//	char		**results;
//	char		*substring;
//	const char  *current_ptr;
//	size_t		len_substr;
//
//	delimeter_n = ft_delimiter_counter(s, c);
//	results = (char **)malloc((delimeter_n + 2) * sizeof(char *));
//	if (results == NULL)
//	{
//		return (NULL);
//	}
//	current_ptr = s;
//	next_res_indx = 0;
//	while (*s != 0)
//	{
//		if (*current_ptr == c || *current_ptr == 0)
//		{
//			len_substr = current_ptr - s;
//			substring = (char *)malloc((len_substr + 1) * sizeof(char));
//			if (ft_malloc_check(substring, next_res_indx, results) == 0)
//			{
//				return (NULL);
//			}
//			else
//			{
//				substring[len_substr] = '\0';
//				results[next_res_indx] = ft_memcpy(substring, s, len_substr);
//				next_res_indx++;
//				if (*current_ptr == 0)
//				{
//					results[next_res_indx] = 0;
//					s = current_ptr;
//				}
//				else
//				{
//					s = current_ptr + 1;
//				}
//			}
//		}
//		current_ptr++;
//	}
//	return (results);
//}


//char	**ft_split(char const *s, char c)
//{
//	int			delimeter_n;
//	int 		next_result_index;
//	char		**results;
//	char		*substring;
//	const char  *current_ptr;
//	size_t		len_substr;
//
//	delimeter_n = ft_delimiter_counter(s, c);
//	results = (char **)malloc((delimeter_n + 2) * sizeof(char *));
//	if (results == NULL)
//	{
//		return (NULL);
//	}
//	current_ptr = s;
//	next_result_index = 0;
//	while (*s != 0)
//	{
//		if (*current_ptr == c || *current_ptr == 0)
//		{
//			len_substr = current_ptr - s;
//			substring = (char *)malloc((len_substr + 1) * sizeof(char));
//			if (substring == NULL)
//			{
//				while (next_result_index > 0)
//				{
//					free(results[next_result_index]);
//					next_result_index--;
//				}
//				free(results);
//				return (NULL);
//			}
//			else
//			{
//				substring[len_substr] = '\0';
//				results[next_result_index] = ft_memcpy(substring, s, len_substr);
//				next_result_index++;
//				if (*current_ptr == 0)
//				{
//					results[next_result_index] = 0;
//					s = current_ptr;
//				}
//				else
//				{
//					s = current_ptr + 1;
//				}
//			}
//		}
//		current_ptr++;
//	}
//	return (results);
//}
