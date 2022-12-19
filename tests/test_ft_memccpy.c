//
//  test_ft_memccpy.c
//  lib_ft
//
//  Created by Julia on 30.10.2020.
//

//memccpy -- copy string until character found
//The memccpy() function copies bytes from string src to string dst.

//If the character c (as converted to an unsigned char) occurs in the string src,
//the copy stops and a pointer to the byte after the copy of c in the string dst is returned.

//Otherwise, n bytes are copied, and a NULL pointer is returned.
//
//The source and destination strings should not overlap, as the behavior is undefined.

#include "test_libft.h"
#include <stdio.h>

void	test_ft_memccpy1(void)
{
	char dest[] = "123456789";
	char source[] = "abcde";
	char c = 'c';
	char *result;
	result = ft_memccpy(dest, source, c, 2);

	assert(strcmp(dest, "ab3456789") == 0);
	assert(result == NULL);
}

void	test_ft_memccpy2(void)
{
	char dest[] = "123456789";
	char source[] = "abxde";
	char c = 'x';
	char *result;
	result = ft_memccpy(dest, source, c, 6);

	assert(strcmp(dest, "abx456789") == 0);
	assert(strcmp(result, "456789") == 0);
}

void	test_ft_memccpy3(void)
{
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char src[] = "string with\200inside !";
	char c = '\200';
	char *result;
	char *result1;
	result = memccpy(buff1, src, c, 26);
	result1 = ft_memccpy(buff2, src, c, 26);
	
//	printf("%s\n", result);
//	printf("%s\n", result1);
	assert(ft_memcmp(buff1, buff2, 21) == 0);
}

void	test_ft_memccpy(void)
{
	test_ft_memccpy1();
	test_ft_memccpy2();
	test_ft_memccpy3();
}
