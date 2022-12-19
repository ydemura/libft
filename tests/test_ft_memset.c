//
//  test_ft_memset.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/29/20.
//
//
//memset -- fill a byte string with a byte value
//The memset() function writes len bytes of value c
//(converted to an unsigned char) to the string b.
//The memset() function returns its first argument.
//

#include "test_libft.h"

void	test_ft_memset(void)
{
	char string[] = "aaaaaaaaaaaaa";
	ft_memset(string, '@', 5);
	assert(string[0] == '@');
	assert(string[1] == '@');
	assert(string[2] == '@');
	assert(string[3] == '@');
	assert(string[4] == '@');
	assert(string[5] == 'a');
}
