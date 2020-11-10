//
//  test_ft_split.c
//  lib_ft
//
//  Created by Julia on 03.11.2020.
//

//	#1. The string to be split.
//	#2. The delimiter character.

//	The array of new strings resulting from the split. NULL if the allocation fails.

//	Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter (роздільник). The array must be ended by a NULL pointer.

//	malloc i free (!)

#include "test_libft.h"

//[fail]: your split does not work with basic input
//Test code:
//	char *s = "      split       this for   me  !       ";
//
//	char **result = ft_split(s, ' ');
//	while (*result)
//	{
//		if (strcmp(*result, *expected))
//		{
//			exit(TEST_FAILED);
//		}
//		result++;
//		expected++;
//	}
//	exit(TEST_SUCCESS);
//
//Diffs:
//       split: |split|
//    ft_split: |A|


void	test_ft_split1(void)
{
	char s1[] = "12,abc,cba1,xyzgf";
	char c1 = ',';
	char **result1;
	
	result1 = ft_split(s1, c1);
	
	//printf("%s\n%s\n%s\n%s\n", result1[0], result1[1], result1[2], result1[3]);
	assert(ft_strncmp(result1[0], "12", 3) == 0);
	assert(ft_strncmp(result1[1], "abc", 4) == 0);
	assert(ft_strncmp(result1[2], "cba1", 5) == 0);
	assert(ft_strncmp(result1[3], "xyzgf", 6) == 0);
}

void	test_ft_split2(void)
{
	char s2[] = "||||one|two||three|||hi||"; // the last + first delimeter is an issue + more then 1 delimeter is an issue
	char c2 = '|';
	char **result;

	result = ft_split(s2, c2);

	//printf("%s%s%s%s%s", result[0], result[1], result[2], result[3], result[4]);
	assert(ft_strncmp(result[0], "one", 3) == 0);
	assert(ft_strncmp(result[1], "two", 4) == 0);
	assert(ft_strncmp(result[2], "three", 5) == 0);
	assert(ft_strncmp(result[3], "hi", 6) == 0);
}

void	test_ft_split3(void)
{
	char s2[] = "      split       this for   me  !       "; // the last + first delimeter is an issue + more then 1 delimeter is an issue
	char c2 = ' ';
	char **result;

	result = ft_split(s2, c2);
	int n = 0;
	while (result[n] != 0)
	{
		printf("%s\n", result[n]);
		n++;
	}

	assert(ft_strncmp(result[0], "split", 5) == 0);
	assert(ft_strncmp(result[1], "this", 4) == 0);
	assert(ft_strncmp(result[2], "for", 3) == 0);
	assert(ft_strncmp(result[3], "me", 2) == 0);
	assert(ft_strncmp(result[4], "!", 1) == 0);
	// assert(ft_strncmp(result[5], (null), 6) == 0);
}

void	test_ft_split4(void)
{
//	char *s = "olol                     ";
//	char **result = ft_split(s, ' ');
//
//	split_cmp_array(expected, result);
//
//Diffs:
//	   split: |olol|
//	ft_split: |(null)|
	
	char s2[] = "....split..it.for...me...!..."; // the last + first delimeter is an issue + more then 1 delimeter is an issue
	char c2 = '.';
	char **result;

	result = ft_split(s2, c2);
//	int n = 0;
//	while (result[n] != 0)
//	{
//		printf("%s\n", result[n]);
//		n++;
//	}

	assert(ft_strncmp(result[0], "split", 5) == 0);
	assert(ft_strncmp(result[1], "it", 4) == 0);
	assert(ft_strncmp(result[2], "for", 3) == 0);
	assert(ft_strncmp(result[3], "me", 2) == 0);
	assert(ft_strncmp(result[4], "!", 1) == 0);
	//assert(ft_strncmp(result[5], (null), 6) == 0);
}

void	test_ft_split5(void)
{
	
	char s2[] = "      split       this for   me  !       ";
	char c2 = ' ';
	char **result;

	result = ft_split(s2, c2);
	int n = 0;
	while (result[n] != 0)
	{
		printf("%s\n", result[n]);
		n++;
	}

//	assert(ft_strncmp(result[0], "split", 5) == 0);
//	assert(ft_strncmp(result[1], "it", 4) == 0);
//	assert(ft_strncmp(result[2], "for", 3) == 0);
//	assert(ft_strncmp(result[3], "me", 2) == 0);
//	assert(ft_strncmp(result[4], "!", 1) == 0);
	//assert(ft_strncmp(result[5], (null), 6) == 0);
}

void	test_ft_split(void)
{
//	test_ft_split1();
//	test_ft_split2();
//	test_ft_split3();
//	test_ft_split4();
	test_ft_split5();
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


//static	int		ft_delimetr_count(char const *s, char c)
//{
//	int		result;
//
//	result = 0;
//	while (*s != 0)
//	{
//		if (*s == c)
//		{
//			result++;
//		}
//		s++;
//	}
//	return (result);
//}
//
//static	int		ft_subsstr_until_char(char **substring, const char **start, char c)
//{
//	const char	*end;
//
//	end = *start;
//	while (*end != 0 && *end != c)
//		end++;
//	*substring = malloc(((end - *start) + 1) * sizeof(char));
//	if (*substring == NULL)
//		return (0);
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


//version 10Nov 12:00

//#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//
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
//static	int		ft_subsstr_until_char(char **substring, const char **start, char c)
//{
//	const char	*end;
//
//	end = *start;
//	while (*start == c)
//	{
//		start++;
//	}
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
//	printf("%d\n", n_substrings);
//	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
//	if (results == NULL)
//	{
//		return (NULL);
//	}
//	while (i_substrings < n_substrings)
//	{
//		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
//		{
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
//	}
//	results[n_substrings] = 0;
//	return (results);
//}

//try2

//static	int		ft_substr_count(char const *s, char c)
//{
//	char const *end;
//	int		result;
//
//	result = 0;
//	end = s;
//	while (1)
//		if (*end == c)
//		{
//			result += (end - s > 0);
//			s = end + 1;
//			end = s;
//		}
//		else if (*end == 0)
//			return result + (end - s > 0);
//		else
//			end++;
//}
//
//static int ft_subsstr_until_char(char **substring, const char **start, char c)
//{
//	const char	*end;
//	size_t len;
//
//	end = *start;
//	while (*end != '\0' && *end != c)
//	{
//		end++;
//	}
//	len = end - *start;
//	*substring = malloc((len + 1) * sizeof(char));
//	if (*substring == NULL)
//	{
//		return (0);
//	}
//	ft_memcpy(*substring, *start, len);
//	substring[len] = 0;
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
//	n_substrings = ft_substr_count(s, c);
//	results = (char **)malloc((n_substrings + 1) * sizeof(char *));
//	if (results == NULL)
//		return (NULL);
//	while (i_substrings < n_substrings)
//	{
//		while (*s == c)
//			s++;
//		if (*s == 0)
//			break;
//		if (ft_subsstr_until_char(&results[i_substrings], &s, c) == 1)
//			i_substrings++;
//		else
//		{
//			while (i_substrings > 0)
//				free(results[i_substrings--]);
//			free(results);
//			return (NULL);
//		}
//	}
//	results[n_substrings] = NULL;
//	return (results);
//}
