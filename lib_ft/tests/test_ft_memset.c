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
	void *ptr = malloc(3);
	
	assert(ft_memset(ptr, '@', 1) == memset(ptr, '@', 1));
	assert(ft_memset(ptr, '@', 3) == memset(ptr, '@', 3));
}
