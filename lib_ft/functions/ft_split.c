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

//ft_split:      [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [💥 ]
//[crash]: 3 your split does not work with basic input
static	int		ft_delimetr_count(char const *s, char c)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			result++;
		}
		i++;
	}
	return (result);
}

static int ft_subsstr_until_char(char **substring, const char **start, char c)
{
	const char	*end;

	while (**start == c)
	{
		(*start)++;
	}
	end = *start;
	while (*end != '\0' && *end != c)
	{
		end++;
	}
	if (end - *start < 1)
	{
		return (1);
	}
	*substring = malloc(((end - *start) + 1) * sizeof(char));
	if (*substring == NULL)
	{
		return (0);
	}
	ft_memcpy(*substring, *start, end - *start);
	(*substring)[end - *start] = '\0';
	
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
		{
			i_substrings++;
		}
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


//ft_split:      [OK] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] [💥 ]
//[fail]: 2 your split does not work with one word
//static	int		ft_delimetr_count(char const *s, char c)
//{
//	int		result;
//	int		i;
//
//	result = 0;
//	i = 0;
//	while (s[i] != 0)
//	{
//		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
//		{
//			result++;
//		}
//		i++;
//	}
//	return (result);
//}
//
//static int ft_subsstr_until_char(char **substring, const char **start, char c)
//{
//	const char	*end;
//
//	while (**start == c)
//	{
//		(*start)++;
//	}
//	end = *start;
//	while (*end != '\0' && *end != c)
//	{
//		end++;
//	}
//	if (end - *start < 1)
//	{
//		return (1);
//	}
//	*substring = malloc(((end - *start) + 1) * sizeof(char));
//	if (*substring == NULL)
//	{
//		return (0);
//	}
//	ft_memcpy(*substring, *start, end - *start);
//	(*substring)[end - *start] = '\0';
//
////	int len = ft_strlen(*substring);
////	printf("%i", len);
//
//	*start = end + 1;
//	return (1);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	int		n_substrings;
//	int		i_substrings;
//	char	**results;
//
//	i_substrings = 0;
//	n_substrings = ft_delimetr_count(s, c) + 1;
//	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
//	if (results == NULL)
//		return (NULL);
////	printf("len of substring:");
//	while (i_substrings < n_substrings)
//		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
//		{
////			printf("%p\n", results[i_substrings]);
//			i_substrings++;
//		}
//		else
//		{
//			while (i_substrings >= 0)
//			{
//				free(results[i_substrings]);
//				i_substrings--;
//			}
//			free(results);
//			return (NULL);
//		}
////	printf("\n");
//	results[n_substrings - 1] = NULL;
////	printf("%p\n", results[i_substrings]);
//	return (results);
//}




//does not work
//static	int		ft_delimetr_count(char const *s, char c)
//{
//	int		result;
//	int		i;
//
//	result = 0;
//	i = 0;
//	while (s[i] != 0)
//	{
//		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
//		{
//			result++;
//		}
//		i++;
//	}
//	return (result);
//}
//
//char	*tosee_ft_strdup(const char *s1)
//{
//	int		len;
//	int		i;
//	char	*s2;
//
//	i = 0;
//	len = 0;
//	while (s1[len] != '\0')
//	{
//		len++;
//	}
//	s2 = (char *)malloc((len + 1) * sizeof(char));
//	if (s2 == NULL)
//	{
//		return (NULL);
//	}
//	while (s1[i] != '\0')
//	{
//		s2[i] = s1[i];
//		i++;
//	}
//	s2[i] = '\0';
//	return (s2);
//}
//
//static char **fill_arr(char const *string, char **results, char c) // split....this.for....me..!
//{
//	char *substring;
//	int start;
//	int end;
//	int len;
//	int i;
//	int n;
//
//	start = 0;
//	end = 0;
//	len = 0;
//	n = 0;
//	while (string != 0)
//	{
//		i = 0;
//		while (string[start] == c)
//		{
//			start++;
//		}
//		while (string[end] != c)
//		{
//			end++;
//		}
//		len = end - start;
//		substring = malloc((len + 1) * sizeof(char));
//		if (substring == NULL)
//		{
//			return (0);
//		}
//		while (start < end)
//		{
//			substring[i] = string[start];
//			start++;
//			i++;
//		}
//		substring[i] = '\0';
//		start = end;
//		n++;
//	}
//
//
//	return (results);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	int		n_substrings;
//	int		i_substrings;
//	char	**results;
//	char	*string;
//
//	i_substrings = 0;
//	n_substrings = ft_delimetr_count(s, c) + 1;
//	string = ft_strtrim(s, &c); // split....this.for....me..!
//	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
//	if (results == NULL)
//		return (NULL);
//	while(i_substrings < n_substrings)
//	{
//		fill_arr(string, &results[i_substrings], c);
//		i_substrings++;
//	}
//	results[i_substrings] = NULL;
//	return (results);
//}




//ft_split:      [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [💥 ]
//[fail]: 3 your split does not work with basic input
//static	int		ft_delimetr_count(char const *s, char c)
//{
//	int		result;
//	int		i;
//
//	result = 0;
//	i = 0;
//	while (s[i] != 0)
//	{
//		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
//		{
//			result++;
//		}
//		i++;
//	}
//	return (result);
//}
//
//static int ft_subsstr_until_char(char **substring, const char **start, char c)
//{
//	const char	*end;
//
//	while (**start == c)
//	{
//		(*start)++;
//	}
//	end = *start;
//	while (*end != '\0' && *end != c)
//	{
//		end++;
//	}
//	*substring = malloc(((end - *start) + 1) * sizeof(char));
//	if (*substring == NULL)
//	{
//		return (0);
//	}
//	ft_memcpy(*substring, *start, end - *start);
//	*start = end + 1;
//	return (1);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	int		n_substrings;
//	int		i_substrings;
//	char	**results;
//
//	i_substrings = 0;
//	n_substrings = ft_delimetr_count(s, c) + 1;
//	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
//	if (results == NULL)
//		return (NULL);
//	while (i_substrings < n_substrings)
//		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
//			i_substrings++;
//		else
//		{
//			while (i_substrings >= 0)
//			{
//				free(results[i_substrings]);
//				i_substrings--;
//			}
//			free(results);
//			return (NULL);
//		}
//	results[n_substrings] = NULL;
//	return (results);
//}
//
