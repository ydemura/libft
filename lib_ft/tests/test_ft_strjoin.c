//
//  test_ft_strjoin.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//

//Parameters 	#1. The prefix string.
//				#2. The suffix string.

//Return value The new string. NULL if the allocation fails.
//External functs. malloc
//Description Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

#include "test_libft.h"

void	test_ft_strjoin(void)
{
	char s1[] = "aaa";
	char s2[] = "bbb";
	
	char *new_str;
	new_str = ft_strjoin(s1, s2);

	printf("%s\n%s\n%s\n", s1, s2, new_str);
	assert(ft_strncmp(new_str, "aaabbb", 10) == 0);
}
