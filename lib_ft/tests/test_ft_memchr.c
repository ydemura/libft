//
//  test_ft_memchr.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//

// 	memchr -- locate byte in byte string

//	function locates the first occurrence of c (converted to an
//	unsigned char) in string s.

//	returns a pointer to the byte located, or NULL if
//	no such byte exists within n bytes.

// it returns pure address



#include "test_libft.h"

void	test_ft_memchr(void)
{
	char s[] = "testme";
	
	assert(memchr(s, 'f', 6) == NULL);
	assert(ft_memchr(s, 'f', 6) == NULL);
	assert(ft_memchr(s, 'm', 2) == NULL);
	assert(ft_memchr(s, 'm', 0) == NULL);
	assert(ft_memchr(s, 'g', 19) == NULL);
	assert(ft_memchr(s, ' ', 3) == NULL);
	assert(memchr(s, 't', 2) == ft_memchr(s, 't', 2));
}
