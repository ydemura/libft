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
	assert(strcmp(s, "-5778") == 0);
}

void	test_ft_itoa2(void)
{
	int n;
	char *s;
	
	n = 1234567; //up to 7 symbols all OK + and -
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "1234567") == 0);
}

void	test_ft_itoa3(void)
{
	int n;
	char *s;
	
	n = 2147483647;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "2147483647") == 0);
}

void	test_ft_itoa4(void)
{
	int n;
	char *s;
	
	n = -2147483648;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "-2147483648") == 0);
}

void	test_ft_itoa5(void)
{
	int n;
	char *s;
	
	n = -2147483648;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "-2147483648") == 0);

}

void	test_ft_itoa6(void)
{
	//[KO]: your itoa does not allocate the good size so the \0 test may be false
	//Test code:
	//	int size;
	//	char *i1;
	//
	//	i1 = ft_itoa(0);
	//	size = get_last_malloc_size();
	//	if (size == 2)
	//		exit(TEST_SUCCESS);
	//	exit(TEST_KO);
	//
	//Diffs:
	//		itoa: |2|
	//	 ft_itoa: |1|
	
	int n;
	char *s;
	
	n = 0;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "0") == 0);
	
}

void	test_ft_itoa7(void)
{
	int n;
	char *s;
	
	n = -180525;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "-180525") == 0);
}

void	test_ft_itoa8(void)
{
	int n;
	char *s;
	
	n = -770126;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "-770126") == 0);
}

void	test_ft_itoa9(void)
{
	int n;
	char *s;
	
	n = -859058;
	s = ft_itoa(n);
	
	//printf("%s\n", s);
	assert(strcmp(s, "-859058") == 0);
}

void	test_ft_itoa(void)
{
	test_ft_itoa1();
	test_ft_itoa2();
	test_ft_itoa3();
	test_ft_itoa4();
	test_ft_itoa5();
	test_ft_itoa6();
	test_ft_itoa7();
	test_ft_itoa8();
	test_ft_itoa9();
}


//Testing ft_itora
//[!] Error for value "-180525" - Expected: -180525 - Got: -0180525
//[!] Error for value "-770126" - Expected: -770126 - Got: -  o0770126
//[!] Error for value "-859058" - Expected: -859058 - Got: -0859058
//[*] ft_itoa : [KO]
