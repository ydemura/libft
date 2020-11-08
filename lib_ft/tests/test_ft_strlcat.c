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
	char dst[50] = "destination/"; //12
	char dst1[50] = "destination/"; //12
	char src[] = "aaaaaa"; //6
	int destsize = 19;
	
	ft_strlcat(dst, src, destsize);
	strlcat(dst1, src, destsize);
	//printf("my: %s\nor: %s\n", dst, dst1);
	//assert(ft_strlcat(dst, src, destsize) == 18);
	//printf("my: %s\nor: %s\n", dst, dst1);
	assert(ft_memcmp(dst, "destination/aaaaaa", 20) == ft_memcmp(dst1, "destination/aaaaaa", 20));
}

void	test_ft_strlcat2(void)
{
	char dst[50] = "destination/"; //12
	char dst1[50] = "destination/"; //12
	char src[] = "aaaaaa"; //6
	int destsize = 3;
	
	ft_strlcat(dst, src, destsize);
	strlcat(dst1, src, destsize);
	//printf("my: %s\nor: %s\n", dst, dst1);
	//assert(ft_strlcat(dst, src, destsize) == 18);
	//printf("my: %s\nor: %s\n", dst, dst1);
	assert(ft_memcmp(dst, "destination/aaaaaa", 20) == ft_memcmp(dst1, "destination/aaaaaa", 20));
}

void	test_ft_strlcat3(void)
{
	char dst[50] = "destination/"; //12
	char dst1[50] = "destination/"; //12
	char src[] = "aaaaaa"; //6
	int destsize = 0;
	
	ft_strlcat(dst, src, destsize);
	strlcat(dst1, src, destsize);
	//printf("my: %s\nor: %s\n", dst, dst1);
	//assert(ft_strlcat(dst, src, destsize) == 18);
	//printf("my: %s\nor: %s\n", dst, dst1);
	assert(ft_memcmp(dst, "destination/aaaaaa", 20) == ft_memcmp(dst1, "destination/aaaaaa", 20));
}

void	test_ft_strlcat4(void)
{
	char dst[50] = ""; //12
	char dst1[50] = ""; //12
	char src[] = "aaaaaa"; //6
	int destsize = 4;
	
	ft_strlcat(dst, src, destsize);
	strlcat(dst1, src, destsize);
	//printf("my: %s\nor: %s\n", dst, dst1);
	//assert(ft_strlcat(dst, src, destsize) == 18);
	//printf("my: %s\nor: %s\n", dst, dst1);
	assert(ft_memcmp(dst, "destination/aaaaaa", 20) == ft_memcmp(dst1, "destination/aaaaaa", 20));
}

void	test_ft_strlcat5(void)
{
//		char *str = "the cake is a lie !\0I'm hidden lol\r\n"; //"the cake is a lie !I'm hidden lol"
//		char buff1[0xF00] = "there is no stars in the sky";
//		char buff2[0xF00] = "there is no stars in the sky";
//		size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//		size_t r1 = __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
//		size_t r2 = ft_strlcat(buff2, str, max);
//		size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
		//printf("%zu\n", max);
//		size_t r1 = ft_strlcat(buff1, str, 23);
//		size_t r2 = strlcat(buff2, str, 23);
		//printf("%zu\n%zu\n", r1, r2);
		//if (r1 != r2)
			
			//printf("%s\n", "failed1");
//		char s1[4] = "";
//		char s2[4] = "";
//		r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0))
//			;
//		r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4)
//			;
//		if (r1 != r2)
//			printf("%s\n", "failed2");

//	Diffs:
//		 strlcat: |42|
//	  ft_strlcat: |47|
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
