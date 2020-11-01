//
//  test_ft_strlcpy.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//
//	strlcpy, strlcat -- size-bounded string copying and concatenation (chaining)
//	The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

//	strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

//	strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

//	return the total length of the string they tried to create.  For strlcpy() that means the length of src.

//	If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.

#include "test_libft.h"

void	test_ft_strlcpy1(void)
{
	char dst[] = "destination";
	char src[] = "copythis";
	int dstsize = 11;
	
	assert(ft_strlcpy(dst, src, dstsize) == 8);
	assert(ft_strncmp(dst, "copythis", 10) == 0);
	
}

void	test_ft_strlcpy2(void)
{
	char dst[] = "destination";
	char src[] = "copythi";
	int dstsize = 0;
	
	assert(ft_strlcpy(dst, src, dstsize) == 7);
	assert(ft_strncmp(dst, "destination", 10) == 0);
}

void	test_ft_strlcpy3(void)
{
	char dst[] = "destination";
	char src[] = "";
	int dstsize = 11;
	
	assert(ft_strlcpy(dst, src, dstsize) == 0);
	assert(ft_strncmp(dst, "", 10) == 0);
}

void	test_ft_strlcpy4(void)
{
	char dst[] = "";
	char src[] = "check";
	int dstsize = 0;
	
	assert(ft_strlcpy(dst, src, dstsize) == 5);
	assert(ft_strncmp(dst, "", 10) == 0);
}

void	test_ft_strlcpy5(void)
{
	char dst[] = "";
	char src[] = "check";
	int dstsize = 0; //dst zise canot be more then dest it have to be 0
	
	assert(ft_strlcpy(dst, src, dstsize) == 5); // ----> detected buffer overflow
	assert(ft_strncmp(dst, "", 10) == 0);
}

void	test_ft_strlcpy6(void)
{
	char dst[] = "dest";
	char src[] = "checkthis";
	int dstsize = 4;
	
	assert(ft_strlcpy(dst, src, dstsize) == 9);
	assert(ft_strncmp(dst, "chec", 10) == 0);
}


void	test_ft_strlcpy(void)
{
	test_ft_strlcpy1();
	test_ft_strlcpy2();
	test_ft_strlcpy3();
	test_ft_strlcpy4();
	test_ft_strlcpy5();
	test_ft_strlcpy6();
}
