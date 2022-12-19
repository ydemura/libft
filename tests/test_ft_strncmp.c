//
//  test_ft_strncmp.c
//  libft
//
//  Created by Julia on 27.10.2020.
//

//The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.

//The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.

//The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater than `\0'.

#include "test_libft.h"



void	test_ft_strncmp1(void)
{
	assert(strncmp("aq", "ab", 1) == ft_strncmp("aq", "ab", 1));
	assert(strncmp("AZ!#FDGCVs", "AZ!#FDGCVl", 1) == ft_strncmp("AZ!#FDGCVs", "AZ!#FDGCVl", 1));
	assert(strncmp("", "", 1) == ft_strncmp("", "", 1));
}

void	test_ft_strncmp2(void)
{
	char s1[] = "\200";
	char s2[] = "\0";

	//printf("%i\n%i\n", strncmp(s1, s2, 1), ft_strncmp(s1, s2, 1));
	assert(strncmp(s1, s2, 1) == ft_strncmp(s1, s2, 1));
}

void	test_ft_strncmp3(void)
{

	//assert(i1 == i2);
}

void	test_ft_strncmp(void)
{
	test_ft_strncmp1();
	test_ft_strncmp2();
//	test_ft_strncmp3();
	
}
