//
//  test_ft_strnstr.c
//  lib_ft
//
//  Created by Julia on 28.10.2020.
//

#include "test_libft.h"

void test_ft_strnstr(void)
{
	assert(ft_strnstr("findneedle", "dne", 8) == strnstr("findneedle", "dne", 8));
	assert(ft_strnstr("findneedle", "dne", 3) == strnstr("findneedle", "dne", 3));
}
