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

void	test_ft_memccpy1(void)
{
	char dest[] = "123456789";
	char source[] = "abcde";
	char c = 'c';
	char *result;
	result = ft_memccpy(dest, source, c, 2);

	assert(ft_strncmp(dest, "ab3456789", ft_strlen(dest)) == 0);
	assert(result == NULL);
}

void	test_ft_memccpy2(void)
{
	char dest[] = "123456789";
	char source[] = "abxde";
	char c = 'x';
	char *result;
	result = ft_memccpy(dest, source, c, 6);

	assert(ft_strncmp(dest, "abx456789", ft_strlen(dest)) == 0);
	assert(ft_strncmp(result, "456789", ft_strlen(result)) == 0);
}

void	test_ft_memccpy(void)
{
	test_ft_memccpy1();
	test_ft_memccpy2();
}
