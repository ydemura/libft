//
//  test_ft_itoa.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/5/20.
//
//Parameters #1. the integer to convert.
//External functs. malloc

//Return value The string representing the integer. NULL if the allocation fails.

//Description Allocates (with malloc(3)) and returns a string representing the integer received as an argument.

//Negative numbers must be handled.


#include "test_libft.h"

void	test_ft_itoa1(void)
{
	int n;
	char *s;
	
	n = -5778; //-2147483648
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(ft_strncmp(s, "-5778", 10) == 0);
}

void	test_ft_itoa2(void)
{
	int n;
	char *s;
	
	n = 1234567; //up to 7 symbols all OK + and -
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(ft_strncmp(s, "1234567", 9) == 0);
}

void	test_ft_itoa3(void)
{
	int n;
	char *s;
	
	n = 2147483647;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(ft_strncmp(s, "2147483647", 11) == 0);
}

void	test_ft_itoa4(void)
{
	int n;
	char *s;
	
	n = -2147483648;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(ft_strncmp(s, "-2147483648", 11) == 0);
}

void	test_ft_itoa5(void)
{
	int n;
	char *s;
	
	n = 0;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(ft_strncmp(s, "0", 11) == 0);
}

void	test_ft_itoa(void)
{
	test_ft_itoa1();
	test_ft_itoa2();
	test_ft_itoa3();
	test_ft_itoa4();
	test_ft_itoa5();
}
