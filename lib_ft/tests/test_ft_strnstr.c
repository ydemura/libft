//
//  test_ft_strnstr.c
//  lib_ft
//
//  Created by Julia on 28.10.2020.
//

//The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

//If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.

#include "test_libft.h"

void test_ft_strnstr1(void)
{
	assert(ft_strnstr("findneedle", "dne", 8) == strnstr("findneedle", "dne", 8));
	assert(ft_strnstr("findneedle", "dne", 3) == strnstr("findneedle", "dne", 3));
}

void test_ft_strnstr2(void)
{
	char hs[] = "MZIRIBMZIRIBMZE123";
	char ne[] = "MZIRIBMZE";
//	char hs[] = "0123456789test00000";
//	char ne[] = "test";
	int len = 9;
//	char *i1 = strnstr(hs, ne, len);
//	char *i2 = ft_strnstr(hs, ne, len);
	
	assert(strnstr(hs, ne, len) == ft_strnstr(hs, ne, len));
}

void test_ft_strnstr(void)
{
	test_ft_strnstr1();
	test_ft_strnstr2();
}
