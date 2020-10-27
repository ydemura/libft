//
//  test_toupper.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_toupper(void)
{
	assert(ft_toupper('a') == 'A');
	assert(ft_toupper('1') == '1');
	assert(ft_toupper('A') == 'A');
}
