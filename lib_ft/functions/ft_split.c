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

static int ft_substr_number(char const *s, char c)
{
	int n_substr;
	int i;

	n_substr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			n_substr++;
		}
		i++;
	}
	return (n_substr);
}

//static int find_start_or_end(char const *s, char c, int start, int end)
//{
//	while (s[start] == c && s[start] != '\0')
//	{
//		start++;
//		return (start);
//	}
////	end = start;
//	while (s[end] != c && s[end] != '\0')
//	{
//		end++;
//		return (end);
//	}
//	return (0);
//}

char	**ft_split(char const *s, char c)
{
	int n_substr;
	char **array;
	char *substring;
	int i;
	int start;
	int end;
	int len_substr;
	
	n_substr = ft_substr_number(s, c);
	array = (char **)malloc((n_substr + 1) * sizeof(char *));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	start = 0;
	while (i < n_substr)
	{
		while (s[start] == c && s[start] != '\0')
		{
			start++;
		}
		end = start;
		while (s[end] != c && s[end] != '\0')
		{
			end++;
		}
		len_substr = end - start;
		substring = (char *)malloc((len_substr + 1) * sizeof(char));
		if (substring == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
		array[i] = substring;
		while (start < end)
		{
			*substring = s[start];
			start++;
			substring++;
		}
		*substring = '\0';
		start = end + 1;
		i++;
	}
	
	array[i] = NULL;
	return (array);
}


//static int ft_substr_number(char const *s, char c)
//{
//	int n_substr;
//	int i;
//
//	n_substr = 0;
//	i = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
//		{
//			n_substr++;
//		}
//		i++;
//	}
//	return (n_substr);
//}
//
////static int find_start_or_end(char const *s, char c, int start, int end)
////{
////	while (s[start] == c && s[start] != '\0')
////	{
////		start++;
////		return (start);
////	}
//////	end = start;
////	while (s[end] != c && s[end] != '\0')
////	{
////		end++;
////		return (end);
////	}
////	return (0);
////}
//
//char	**ft_split(char const *s, char c)
//{
//	int n_substr;
//	char **array;
//	char *substring;
//	int i;
//	int start;
//	int end;
//	int len_substr;
//
//	n_substr = ft_substr_number(s, c);
//	array = (char **)malloc((n_substr + 1) * sizeof(char *));
//	if (array == NULL)
//	{
//		return (NULL);
//	}
//	i = 0;
//	start = 0;
//	while (i < n_substr)
//	{
//		while (s[start] == c && s[start] != '\0')
//		{
//			start++;
//		}
//		end = start;
//		while (s[end] != c && s[end] != '\0')
//		{
//			end++;
//		}
//		len_substr = end - start;
//		substring = (char *)malloc((len_substr + 1) * sizeof(char));
//		if (substring == NULL)
//		{
//			while (i >= 0)
//			{
//				free(array[i]);
//				i--;
//			}
//			free(array);
//			return (NULL);
//		}
//		array[i] = substring;
//		while (start < end)
//		{
//			*substring = s[start];
//			start++;
//			substring++;
//		}
//		*substring = '\0';
//		start = end + 1;
//		i++;
//	}
//	
//	array[i] = NULL;
//	return (array);
//}
