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

//ft_split:      [FAILED] [OK] [FAILED] [OK] [OK] [OK] [FAILED] [OK] [FAILED] [💥 ]
//[fail]: your split does not work with basic input
//[fail]: your split does not work with one word
//[fail]: your split does not work with basic input
//[fail]: your split does not work with basic input

//[fail]: your split does not work with basic input
//Test code:
//	char *string = "      split       this for   me  !       ";
//	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
//	char **result = ft_split(string, ' ');
//
//	split_cmp_array(expected, result);
//
//Diffs:
//       split: |split|
//    ft_split: ||
//
//[fail]: your split does not work with one word
//Test code:
//	char *s = "                  olol";
//	char **result = ft_split(s, ' ');
//
//	split_cmp_array(expected, result);
//
//Diffs:
//       split: |olol|
//    ft_split: ||
//
//[fail]: your split does not work with basic input
//Test code:
//	char *s = "split  ||this|for|me|||||!|";
//	int i = 0;
//	char **result = ft_split(s, '|');
//
//	while (result[i])
//	{
//		if (strcmp(result[i], *expected))
//		{
//			exit(TEST_FAILED);
//		}
//		free(result[i]);
//		i++;
//		expected++;
//	}
//	free(result);
//	exit(TEST_SUCCESS);
//
//Diffs:
//       split: |this|
//    ft_split: ||
//
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
	char s2[] = "|0|pp||789*|||ghg|"; // the last + first delimeter is an issue + more then 1 delimeter is an issue
	char c2 = '|';
	char **result2;

	result2 = ft_split(s2, c2);

	printf("%s\n%s\n%s\n%s\n%s\n", result2[0], result2[1], result2[2], result2[3], result2[4]);
//	assert(ft_strncmp(result2[0], "0", 3) == 0);
//	assert(ft_strncmp(result2[1], "   ", 4) == 0);
//	assert(ft_strncmp(result2[2], " 789*", 5) == 0);
//	assert(ft_strncmp(result2[3], "ghg", 6) == 0);
//	assert(ft_strncmp(result2[4], "", 6) == 0); //should not be
}

void	test_ft_split3(void)
{
	char s3[] = ",,,12,,,,abc,,,,cba1,,,,,xyzgf,,,,";
	char c3 = ',';
	char **result3;

	result3 = ft_split(s3, c3);

	printf("%s\n%s\n%s\n%s\n%s\n%s\n", result3[0], result3[1], result3[2], result3[3], result3[4], result3[5]);
}

void	test_ft_split(void)
{
	test_ft_split1();
	test_ft_split2();
//	test_ft_split3();
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
