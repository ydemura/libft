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

void	test_ft_strtrim(void)
{
	char s1[] = "aa11aa";
	char set[] = "11";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

	//printf("%s\n%s\n%s\n", s1, s2, new_str);
	//assert(ft_strncmp(new_str, "11", 10) == 0);
}
