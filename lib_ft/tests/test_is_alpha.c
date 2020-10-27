//
//  test_isalpha.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_lib_ft.h"

void	test_ft_is_alpha(void)
{
	assert(1 == ft_is_alpha('a'));
	assert(1 == ft_is_alpha('A'));
	assert(0 == ft_is_alpha('4'));
	assert(0 == ft_is_alpha(' '));
}
