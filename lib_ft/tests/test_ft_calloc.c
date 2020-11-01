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
	
	ptr = ft_calloc(n, sizeof(ptr));
	assert(ptr[0] = '0');
	assert(ptr != NULL);
	free(ptr);
}

void	test_ft_calloc2(void) //doesnt work but I am not sure it should
{
	int *ptr;
	int *ptr1;
	int n;
	n = 13;

	ptr = ft_calloc(n, sizeof(ptr));
	ptr1 = calloc(n, sizeof(ptr1));
	assert(ptr[0] == ptr1[0]);
	assert(ptr[0] == ptr1[1]);
	assert(ptr[0] == ptr1[2]);
	assert(ptr[0] == ptr1[3]);
	assert(ptr[0] == ptr1[4]);
	assert(ptr[0] == ptr1[5]);
	assert(ptr[0] == ptr1[6]);
	assert(ptr[0] == ptr1[7]);
	assert(ptr[0] == ptr1[8]);
	assert(ptr[0] == ptr1[9]);
	assert(ptr[0] == ptr1[10]);
	assert(ptr[0] == ptr1[11]);
	assert(ptr[0] == ptr1[12]);
	assert(ptr[0] == ptr1[13]);
	assert(ptr != NULL);
	assert(ptr1 != NULL);
	free(ptr);
	free(ptr1);
}

void	test_ft_calloc3(void)
{
	int *ptr;
	int *ptr1;
	int n;
	n = 0;

	ptr = ft_calloc(n, sizeof(ptr));
	ptr1 = calloc(n, sizeof(ptr1));
	assert(ptr[0] == ptr1[0]);
	assert(ptr != NULL);
	free(ptr);
	free(ptr1);
}

void	test_ft_calloc4(void)
{
	int *ptr;
	int n;
	n = -5;
	
	ptr = ft_calloc(n, sizeof(int));
	assert(ptr == NULL);
	free(ptr);
}

void	test_ft_calloc(void)
{
	test_ft_calloc1();
	test_ft_calloc2();
	test_ft_calloc3();
	test_ft_calloc4();
}


//#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//
////void	ft_bzero(void *s, size_t n);
//
////Number of arguments: Unlike malloc(), calloc() takes two arguments:
////1) Number of blocks to be allocated.
////2) Size of each block.
//
////Return Value: After successful allocation in malloc() and calloc(), a pointer to the block of memory is returned otherwise NULL value is returned which indicates the failure of allocation.
//
//void	*ft_memset_check(void *b, int c, size_t len)
//{
//	unsigned	int		i;
//	unsigned	char	*temp;
//
//	temp = (unsigned char*)b;
//	i = 0;
//	while (i < len)
//	{
//		temp[i] = c;
//		i++;
//	}
//	return (b);
//}
//
//void	*ft_calloc(size_t count, size_t size)
//{
//	void				*result;
//	int					i;
//	unsigned	char	*temp;
//	unsigned	long	number_of_memory;
//
//	number_of_memory = (count) * (size);
//	result = malloc(number_of_memory);
//	if (result == NULL)
//	{
//		return (NULL);
//	}
//	i = 0;
//	temp = (unsigned char*)result;
//	while (i < number_of_memory)
//	{
//		temp[i] = 0;
//		i++;
//	}
////	return (&*result);
////	ft_bzero(result, count * size);
//	return (&*result);
//}
