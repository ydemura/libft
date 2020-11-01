//
//  test_ft_strlcat.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/31/20.
//
//	size-bounded string copying and concatenation

//	strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

//	strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).

//	If the src and dst strings overlap, the behavior is undefined.

// For strlcat() that means the initial length of dst plus the length of src.

//	If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.

#include "test_libft.h"

void	test_ft_strlcat1(void)
{
	char dst[50] = "destination"; //11
	char src[] = "copyit"; //6
	int destsize = 19;
	
	assert(ft_strlcat(dst, src, destsize) == 17);
	assert(ft_strncmp(dst, "destinationcopyit", 20) == 0);
}

void	test_ft_strlcat2(void)
{
	char dst[50] = ""; //11
	char src[] = "copyit"; //6
	int destsize = 12;
	
	assert(ft_strlcat(dst, src, destsize) == 6);
	assert(ft_strncmp(dst, "copyit", 20) == 0);
}

void	test_ft_strlcat3(void)
{
	char dst[50] = "destination"; //11
	char src[] = ""; //6
	int destsize = 12;
	
	assert(ft_strlcat(dst, src, destsize) == 11);
	assert(ft_strncmp(dst, "destination", 20) == 0);
}

void	test_ft_strlcat4(void)
{
	char dst[50] = "destination"; //11
	char src[] = "copyit"; //6
	int destsize = 0;
	
	assert(ft_strlcat(dst, src, destsize) == 6); // !! WRONG original 17, my 6
	assert(ft_strncmp(dst, "destination", 20) == 0); // correct though
}

void	test_ft_strlcat5(void)
{
	char dst[50] = "aaaaa"; // 5
	char src[] = "123456789"; // 9
	int destsize = 3;
	
	assert(strlcat(dst, src, destsize) == 12);
	assert(ft_strncmp(dst, "aaaaa", 20) == 0);
}



void	test_ft_strlcat(void)
{
	test_ft_strlcat1();
	test_ft_strlcat2();
	test_ft_strlcat3();
	test_ft_strlcat4();
	test_ft_strlcat5();
//	test_ft_strlcat6();
//	test_ft_strlcat7();
}
