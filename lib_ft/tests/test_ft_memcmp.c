//
//  test_ft_memcmp.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//
//	compare byte string

//	function compares byte string s1 against byte string s2.  Both strings are assumed
//	to be n bytes long.

//	returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that `\200' is
//	greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not
//	required by C and portable code should only depend on the sign of the returned value.



#include "test_libft.h"

void	test_ft_memcmp1(void)
{
	char s1[] = "testme";
	char s2[] = "testme";
	int n = 6;
	
	assert(ft_memcmp(s1, s2, n) == 0);
	assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));
}

void	test_ft_memcmp2(void)
{
	char s1[] = "abbbbb";
	char s2[] = "Abbbbb";
	int n = 4;

	assert(ft_memcmp(s1, s2, n) == 32);
	assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));
}

void	test_ft_memcmp3(void)
{
	char s1[] = "";
	char s2[] = "";
	int n = 1; // ?? when printf with n2 and 2 empty strings - works, when assert - mistake >__<

	assert(ft_memcmp(s1, s2, n) == 0); //when n == 6 not working though comparing with original works WTF
	assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));
}

void	test_ft_memcmp4(void)
{
	char s1[] = "abbbNb";
	char s2[] = "abbbnb";
	int n = 3;

	assert(ft_memcmp(s1, s2, n) == 0);
	assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));
}

void	test_ft_memcmp5(void)
{
	char s1[] = "";
	char s2[] = "abbbnb";
	int n = 3;

	assert(ft_memcmp(s1, s2, n) == -97);
	assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));
}

void	test_ft_memcmp(void)
{
	test_ft_memcmp1();
	test_ft_memcmp2();
	test_ft_memcmp3();
	test_ft_memcmp4();
	test_ft_memcmp5();
}
