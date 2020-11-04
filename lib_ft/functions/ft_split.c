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

char	**ft_split(char const *s, char c)
{
	int			delimeter_n;
	int 		next_result_index;
	char		**results;
	char		*substring;
	const char	*start;
	const char  *current_ptr;
	size_t		len_substr;

	delimeter_n = ft_delimiter_counter(s, c);
	results = (char **)malloc((delimeter_n + 2) * sizeof(char *));
	if (results == NULL)
	{
		return (NULL);
	}
	start = s;
	current_ptr = start;
	next_result_index = 0;
	while (1)
	{
		if (*current_ptr == c || *current_ptr == 0)
		{
			len_substr = current_ptr - start;
			substring = (char *)malloc((len_substr + 1) * sizeof(char));
			if (substring == NULL)
			{
				while (next_result_index > 0)
				{
					free(results[next_result_index]);
					next_result_index--;
				}
				free(results);
				return (NULL);
			}
			substring[len_substr] = '\0';
			results[next_result_index] = ft_memcpy(substring, start, len_substr);
			next_result_index++;
			if (*current_ptr == 0)
			{
				results[next_result_index] = 0;
				return (results);
			}
			else
			{
				start = current_ptr + 1;
			}
		}
		current_ptr++;
	}
}


//char	**ft_split(char const *s, char c)
//{
//	int			delimeter_n;
//	int 		a;
//	char		**array_of_substr;
//	char		*substring;
//	const char	*start;
//	const char  *current_ptr;
//	size_t		len_substr;
//
//	delimeter_n = ft_delimiter_counter(s, c);
//	array_of_substr = (char **)malloc((delimeter_n + 2) * sizeof(char *));
//	if (array_of_substr == NULL)
//	{
//		return (NULL);
//	}
//	start = s;
//	current_ptr = start;
//	a = 0;
//	while (1)
//	{
//		if (*current_ptr != c && *current_ptr != 0)
//		{
//			current_ptr++;
//		}
//		else
//		{
//			len_substr = current_ptr - start;
//			substring = (char *)malloc((len_substr + 1) * sizeof(char));
//			substring[len_substr] = '\0';
//			ft_memcpy(substring, start, len_substr);
//			array_of_substr[a] = substring;
//			a++;
//			if (*current_ptr == 0)
//			{
//				array_of_substr[a] = 0;
//				break;
//			}
//			else
//			{
//				current_ptr++;
//				start = current_ptr;
//			}
//		}
//	}
//	return *(&array_of_substr);
//}
