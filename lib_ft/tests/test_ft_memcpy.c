//
//  test_ft_memcpy.c
//  lib_ft
//
//  Created by Julia on 30.10.2020.
//

//memcpy -- copy memory area
//The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
//The memcpy() function returns the original value of dst.
#include "test_libft.h"

void	test_ft_memcpy1(void)
{
	char string[] = "aaaaaaaaaaaaa";
	char another_string[] = "bbbbbbbbb";
	ft_memcpy(string, another_string, 4);
	assert(string[0] == another_string[0]);
	assert(string[1] == another_string[1]);
	assert(string[2] == another_string[2]);
	assert(string[3] == another_string[3]);
	assert(string[4] != another_string[4]);
}

//[crash]: your memcpy does not behave well with NULL as both params with size

void	test_ft_memcpy2(void)
{
	char string[] = "";
	char another_string[] = "";
	ft_memcpy(string, another_string, 4);
	assert(ft_memcpy(((void *)0), ((void *)0), 3) == memcpy(((void *)0), ((void *)0), 3));

}

void	test_ft_memcpy(void)
{
	test_ft_memcpy1();
	test_ft_memcpy2();
}
