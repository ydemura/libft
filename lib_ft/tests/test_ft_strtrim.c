//
//  test_ft_strtrim.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//

//Parameters 	#1. The string to be trimmed.
//				#2. The reference set of characters to trim.

//Return value The trimmed string. NULL if the allocation fails.
//External functs. malloc

//Description Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

#include "test_libft.h"

void	test_ft_strtrim1(void)
{
	char s1[] = "tesNO WmeNOWowow";
	char set[] = "NOW";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

	//printf("string: %s\nset: %s\nafter f: %s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, set, 10) == 0);
}

void	test_ft_strtrim2(void)
{
	char s1[50] = "tesNO WmeNOWowow";
	char set[50] = "gggg";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);
	assert(new_str == NULL);
}

void	test_ft_strtrim3(void)
{
	char s1[50] = "";
	char set[50] = "gg";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);
	assert(new_str == NULL);
}

void	test_ft_strtrim(void)
{
	test_ft_strtrim1();
	test_ft_strtrim2();
	test_ft_strtrim3();
}
