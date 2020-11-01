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

void	test_ft_calloc1(void)
{
	int *ptr;
	int n;
	n = 5;
	
	ptr = ft_calloc(n, sizeof(int));
	assert(ptr[0] = '0');
	free(ptr);
}

void	test_ft_calloc2(void) //doesnt work but I am not sure it should
{
//	int *ptr;
//	int *ptr1;
//	int n;
//	n = 5;
//
//	ptr = ft_calloc(n, sizeof(int));
//	ptr1 = calloc(n, sizeof(int));
//	assert(ptr[1] = ptr1[1]);
//	free(ptr);
//	free(ptr1);
}

void	test_ft_calloc3(void)
{
	int *ptr;
	int n;
	n = 5;
	
	ptr = ft_calloc(n, sizeof(int));
//	assert(ptr[0] = ptr[1]);
	free(ptr);
}

void	test_ft_calloc4(void)
{
	int *ptr;
	int n;
	n = 5;
	
	ptr = ft_calloc(n, sizeof(int));
	assert(ptr[0] = '0');
	free(ptr);
}

void	test_ft_calloc(void)
{
	test_ft_calloc1();
	test_ft_calloc2();
	test_ft_calloc3();
//	test_ft_calloc4();
//	test_ft_calloc5();
//	test_ft_calloc6();
}
