//
//  test_ft_strdup.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//
//	save a copy of a string
//
//	The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).

//	If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

#include "test_libft.h"

void	test_ft_strdup1(void)
{
	char str[] = "testme";
	char *test = str;
	char *after_test;
	after_test = ft_strdup(test);
	
	assert(strcmp(after_test, test) == 0);
	assert(ft_strlen(after_test) == ft_strlen(test));
	assert(after_test[ft_strlen(after_test + 1)] == test[ft_strlen(test + 1)]);
	free(after_test);
}

void	test_ft_strdup2(void)
{
	char str[] = "";
	char *test = str;
	char *after_test;
	after_test = ft_strdup(test);
	
	assert(strcmp(after_test, test) == 0);
	assert(ft_strlen(after_test) == ft_strlen(test));
	assert(after_test[ft_strlen(after_test)] == test[ft_strlen(test)]);
	free(after_test);
}

void	test_ft_strdup(void)
{
	test_ft_strdup1();
	test_ft_strdup2();
}
