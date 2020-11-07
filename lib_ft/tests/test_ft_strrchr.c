//
//  test_ft_strrchr.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/29/20.
//

 //strchr, strrchr -- locate character in string

//The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

//The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

//The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.

#include "test_libft.h"

void	test_ft_strrchr1(void)
{
	//printf("%s\n%s\n", ft_strrchr("hereisstring12", 'r'), strrchr("hereisstring12", 'r'));
	assert(ft_strrchr("hereisstring12", 'r') == strrchr("hereisstring12", 'r'));
	assert(ft_strrchr("", 'r') == strrchr("", 'r'));
	assert(ft_strrchr("hereisstring12", 'e') == strrchr("hereisstring12", 'e'));
	assert(ft_strrchr("hereisstring12", 'H') == strrchr("hereisstring12", 'H'));
}

void	test_ft_strrchr2(void)
{
	char src[20] = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');
	
	//printf("%s\n%s\n", d1, d2);
	assert(d1 == d2);
}

void	test_ft_strrchr3(void)
{
	char src[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strrchr(src, '\0');
	char *d2 = ft_strrchr(src, '\0');
	
	//printf("%s\n%s\n", d1, d2);
	assert(d1 == d2);
}

void	test_ft_strrchr(void)
{
	test_ft_strrchr1();
	test_ft_strrchr2();
	test_ft_strrchr3();
}


//Diffs:
//     strrchr: ||
//  ft_strrchr: ||
//
//[crash]: your strrchr crash because it read too many bytes or attempt to write on s !
//Test code:
//	char *src = electric_alloc(10);
//
//	__builtin___strcpy_chk (src, "123456789", __builtin_object_size (src, 2 > 1 ? 1 : 0));
//	ft_strrchr(src, 'a');
//	src = electric_alloc_rev(10);
//	__builtin___strcpy_chk (src, "123456789", __builtin_object_size (src, 2 > 1 ? 1 : 0));
//	ft_strrchr(src, 'a');
//	exit(TEST_SUCCESS);
