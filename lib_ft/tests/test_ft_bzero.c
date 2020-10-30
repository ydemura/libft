//
//  test_ft_bzero.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/29/20.
//
// bzero -- write zeroes to a byte string
// The bzero() function writes n zeroed bytes to the string s.
// If n is zero, bzero() does nothing.

//The bzero() function erases the data in the n bytes of the memory
//starting at the location pointed to by s, by writing zeros (bytes
//containing '\0') to that area.

#include "test_libft.h"

void	test_ft_bzero(void)
{
	char string[] = "aaaaaaaaaaaaa";
	ft_bzero(string, 2);
	assert(string[0] == 0);
	assert(string[1] == 0);
	assert(string[2] == 'a');
}
