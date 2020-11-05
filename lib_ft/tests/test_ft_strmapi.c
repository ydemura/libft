//
//  test_ft_strmapi.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/5/20.
//	External functs. malloc

//Parameters 	#1. The string on which to iterate.
//				#2. The function to apply to each character.

//Return value The string created from the successive applications of ’f’. Returns NULL if the allocation fails.

//Description Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.

#include "test_libft.h"

char	give_five(unsigned int i, char c)
{
	if (i == 0)
	{
		c = '0';
	}
	if (i == 5)
	{
		c = '5';
	}
	return (c);
}

char	capitalise_odd(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		c = c - 32;
	}
	return (c);
}

void	test_ft_strmapi1(void)
{
	char *result;
	char const *s;
	
	s = "testthisstring";
	result = ft_strmapi(s, *give_five);
	//printf("%s\n", result);
	assert(ft_strncmp(result, "0estt5isstring", 20) == 0);
}

void	test_ft_strmapi2(void)
{
	char *result;
	char const *s;
	
	s = "testthisstring";
	result = ft_strmapi(s, *capitalise_odd);
	//printf("%s\n", result);
	assert(ft_strncmp(result, "TeStThIsStRiNg", 20) == 0);
}

void	test_ft_strmapi3(void)
{
	char *result;
	char const *s;
	
	s = "";
	result = ft_strmapi(s, *give_five);
	//printf("%s\n", result);
	assert(ft_strncmp(result, "", 20) == 0);
}

void	test_ft_strmapi(void)
{
	test_ft_strmapi1();
	test_ft_strmapi2();
	test_ft_strmapi3();
}
