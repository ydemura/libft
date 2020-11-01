//
//  test_ft_calloc.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//
//	function allocate memory.  The allocated memory is aligned such that it can be used for any data type, including AltiVec- and SSE-related types.  The free() function frees allocations that were created via the preceding allocation functions.
//
//	The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.

//	If successful, calloc(), malloc(), realloc(), reallocf(), and valloc() functions return a pointer to allocated memory.  If there is an error, they return a NULL pointer and set errno to ENOMEM.
//
//

#include "test_libft.h"

// void		*malloc(size_t size);
// The malloc() function allocates size bytes of memory and returns a pointer to the allocated memory.

// malloc -> bzero

void	test_ft_calloc(void)
{
	//assert (calloc(3, 5) == "000000");
	//assert(ft_strncmp(calloc(3, 5), "000000", 20) == 0);
	
}
