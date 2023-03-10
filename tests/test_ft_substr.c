//
//  test_ft_substr.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//

//parameters
//#1. The string from which to create the substring.
//#2. The start index of the substring in the string ’s’.
//#3. The maximum length of the substring.

//Return value The substring. NULL if the allocation fails.

//External functs. malloc

//Description Allocates (with malloc(3)) and returns a substring from the string ’s’.

//The substring begins at index ’start’ and is of maximum size ’len’.

#include "test_libft.h"

void	test_ft_substr1(void)
{
	char s[] = "1234test9";
	char *sub_str;
	int start = 4; //it is INDEX (ind 4 == int 5)
	int len = 4;
	sub_str = ft_substr(s, start, len);

	assert(strcmp(sub_str, "test") == 0);
	
}

void	test_ft_substr2(void)
{
	char s[] = "ABC";
	char *sub_str;
	int start = 2; //it is INDEX (ind 4 == int 5)
	size_t len = 500000000000;
	sub_str = ft_substr(s, start, len);

	assert(strcmp(sub_str, "C") == 0);
}

void	test_ft_substr(void)
{
	//test_ft_substr1();
	test_ft_substr2();
}
