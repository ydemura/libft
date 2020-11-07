//
//  test_ft_memmove.c
//  lib_ft
//
//  Created by Julia on 30.10.2020.
//
//	copy byte string
//	The memmove() function copies len bytes from string src to string dst.
//	The two strings may overlap; the copy is always done in a non-destructive manner.

//	The memmove() function returns the original value of dst.

#include "test_libft.h"

void	test_ft_memmove1(void)
{
	char src[] = "123";
	char dest[] = "abcde";
	char *after = ft_memmove(dest, src, 2);
	
	assert(after == dest);
	assert(ft_strncmp(dest, "12cde", ft_strlen(dest)) == 0);
	
}

void	test_ft_memmove2(void)
{
	char src[] = "123";
	char dest[] = "abcde";
	char *after = ft_memmove(dest, src, 6);
	
	assert(after == dest);
	assert(ft_strncmp(dest, "123de", ft_strlen(dest)) == 0);
	assert(ft_strncmp(after, "123de", ft_strlen(dest)) == 0);
	
}

void	test_ft_memmove3(void)
{
	char src[] = "1234567";
	char dest[] = "abcde";
	char *after = ft_memmove(dest, src, 0);
	
	assert(ft_strncmp(after, "abcde", ft_strlen(after)) == 0);
	assert(ft_strncmp(after, "abcde", ft_strlen(dest)) == 0);
	
}

void	test_ft_memmove4(void)
{
	char src[] = "";
	char dest[] = "abcde";
	char *after = ft_memmove(dest, src, 1);
	
	assert(ft_strncmp(after, "abcde", ft_strlen(dest)) == 0);
	assert(ft_strncmp(dest, "abcde", ft_strlen(dest)) == 0);
	
}

void	test_ft_memmove5(void)
{
	char string[] = "1234567890";
	char *dest = &string[1];
	char *src = &string[5];
	char *after = ft_memmove(dest, src, 7);
	
	assert(ft_strncmp(after, "67890", 7) == 0);
	
}

void	test_ft_memmove6(void)
{
	char string[] = "1234567890aaaaaaaa";
	char *src = &string[0];
	char *dest = &string[5];
	char *after = ft_memmove(dest, src, 7);
	//printf("%s\n", after);
	assert(ft_strncmp(after, "1234567aaaaaa", 7) == 0);
	
}

void	test_ft_memmove7(void)
{
	//char string[] = "1234567890aaaaaaaa";
	//char *src = &string[0];
	//char *dest = &string[5];
	char *after = ft_memmove(((void *)0), ((void *)0), 5);
	//printf("%s\n", after);
	assert(after == memmove(((void *)0), ((void *)0), 5));
	
}

void	test_ft_memmove(void)
{
	test_ft_memmove1();
	test_ft_memmove2();
	test_ft_memmove3();
	test_ft_memmove4();
	test_ft_memmove5();
	test_ft_memmove6();
	test_ft_memmove7();
}
