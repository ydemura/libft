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

void	test_ft_split1(void)
{
	char s[] = "12,abc,cba1,xyzgf";
	char c = ',';
	char **result;
	
	result = ft_split(s, c);
	
	//printf("%s\n%s\n%s\n%s\n", result[0], result[1], result[2], result[3]);
	assert(ft_strncmp(result[0], "12", 3) == 0);
	assert(ft_strncmp(result[1], "abc", 4) == 0);
	assert(ft_strncmp(result[2], "cba1", 5) == 0);
	assert(ft_strncmp(result[3], "xyzgf", 6) == 0);
}

void	test_ft_split2(void)
{
	char s[] = "0|   | 789*||ghg|";
	char c = '|';
	char **result;
	
	result = ft_split(s, c);
	
	//printf("%s\n%s\n%s\n%s\n%s\n%s\n", result[0], result[1], result[2], result[3], result[4], result[5]);
	assert(ft_strncmp(result[0], "0", 3) == 0);
	assert(ft_strncmp(result[1], "   ", 4) == 0);
	assert(ft_strncmp(result[2], " 789*", 5) == 0);
	assert(ft_strncmp(result[3], "", 6) == 0);
	assert(ft_strncmp(result[4], "ghg", 6) == 0);
	assert(ft_strncmp(result[5], "", 6) == 0);
}

void	test_ft_split3(void)
{
	
}

void	test_ft_split(void)
{
	test_ft_split1();
	test_ft_split2();
	//test_ft_split3();
}




