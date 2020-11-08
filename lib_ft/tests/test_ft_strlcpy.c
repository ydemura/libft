//
//  test_ft_strlcpy.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//
//	strlcpy -- size-bounded string copying and concatenation (chaining)

//	strlcpy() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

//	strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

//	return the total length of the string they tried to create.  For strlcpy() that means the length of src.

//	If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.

#include "test_libft.h"
#include <stdio.h>

void	test_ft_strlcpy1(void)
{
	char dst[] = "destination";
	char dst1[] = "destination";
	char src[] = "copythis";
	int dstsize = 0;
	
//	ft_strlcpy(dst, src, dstsize);
//	strlcpy(dst1, src, dstsize);
	//printf("my: %s\nor: %s\n", dst, dst1);

	assert(memcmp(dst, src, 12) == memcmp(dst1, src, 12));
	assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	assert(ft_strlcpy(dst, src, dstsize) == 8);
}

void	test_ft_strlcpy2(void)
{
	char dst[] = "destination";
	char dst1[] = "destination";
	char src[] = "copythis";
	int dstsize = 5;
	
	//assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	//ft_strlcpy(dst, src, dstsize);
	//strlcpy(dst1, src, dstsize);
	//printf("my: %s\nor: %s\n", dst, dst1);

	assert(memcmp(dst, src, 12) == memcmp(dst1, src, 12));
	assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	assert(ft_strlcpy(dst, src, dstsize) == 8);
}

void	test_ft_strlcpy3(void)
{
	char dst[] = "destination";
	char dst1[] = "destination";
	char src[] = "copythis";
	int dstsize = 11;
	
	assert(memcmp(dst, src, 12) == memcmp(dst1, src, 12));
	assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	assert(ft_strlcpy(dst, src, dstsize) == 8);
}

void	test_ft_strlcpy4(void)
{
	char dst[] = "";
	char dst1[] = "";
	char src[] = "copythis";
	int dstsize = 0;
	
	assert(memcmp(dst, src, 12) == memcmp(dst1, src, 12));
	assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	assert(ft_strlcpy(dst, src, dstsize) == 8);
}

void	test_ft_strlcpy5(void)
{
	char dst[] = "aa";
	char dst1[] = "aa";
	char src[] = "";
	int dstsize = 1;
	
	assert(memcmp(dst, src, 12) == memcmp(dst1, src, 12));
	assert(ft_strlcpy(dst, src, dstsize) == strlcpy(dst1, src, dstsize));
	assert(ft_strlcpy(dst, src, dstsize) == 0);
}

void	test_ft_strlcpy(void)
{
	test_ft_strlcpy1();
	test_ft_strlcpy2();
	test_ft_strlcpy3();
	test_ft_strlcpy4();
	test_ft_strlcpy5();
}

//my tests were wrong // try 2
