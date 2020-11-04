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

int		ft_delimiter_counter(char const *s, char c)
{
	int		len_s;
	int		delimeter_n;

	len_s = 0;
	delimeter_n = 0;
	while (s[len_s] != 0)
	{
		if (s[len_s] == c)
		{
			delimeter_n++;
		}
		len_s++;
	}
	return (delimeter_n);
}

int		ft_malloc_check(char *substring, int next_result_index, char **results)
{
	if (substring == NULL)
	{
		while (next_result_index > 0)
		{
			free(results[next_result_index]);
			next_result_index--;
		}
		free(results);
		return (0);
	}
	return (1);
}

char	**ft_do_split(char const *s, char c, char **res, const char *curr_ptr)
{
	int			next_result_index;
	char		*substring;
	size_t		len_substr;

	next_result_index = 0;
	while (*s != 0)
	{
		if (*curr_ptr == c || *curr_ptr == 0)
		{
			len_substr = curr_ptr - s;
			substring = (char *)malloc((len_substr + 1) * sizeof(char));
			if (ft_malloc_check(substring, next_result_index, res) == 0)
			{
				return (NULL);
			}
			else
			{
				substring[len_substr] = '\0';
				res[next_result_index] = ft_memcpy(substring, s, len_substr);
				next_result_index++;
				if (*curr_ptr == 0)
				{
					res[next_result_index] = 0;
					s = curr_ptr;
				}
				else
				{
					s = curr_ptr + 1;
				}
			}
		}
		curr_ptr++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int			delimeter_n;
	char		**results;

	delimeter_n = ft_delimiter_counter(s, c);
	results = (char **)malloc((delimeter_n + 2) * sizeof(char *));
	if (results == NULL)
	{
		return (NULL);
	}
	results = ft_do_split(s, c, results, s);
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
