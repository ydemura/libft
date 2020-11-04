//
//  test_ft_split.c
//  lib_ft
//
//  Created by Julia on 03.11.2020.
//

//	#1. The string to be split.
//	#2. The delimiter character.

//	The array of new strings resulting from the split. NULL if the allocation fails.

//	Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter (роздільник). The array must be ended by a NULL pointer.

//	malloc i free (!)

#include "test_libft.h"

void	test_ft_split(void)
{
	char s[] = "12,abc,cba1,xyzgf";
	char c = ',';
	char **result;
	
	result = ft_split(s, c);
	
	printf("%s\n%s\n%s\n%s\n", result[0], result[1], result[2], result[3]);
	
	
	
	
}
