//
//  test_ft_isprint.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_isprint(void)
{
	assert(ft_isprint(127) == 0);
	assert(ft_isprint(36) == 1);
	assert(ft_isprint(126) == isprint(126));
	assert(ft_isprint(32) == isprint(56));
	assert(ft_isprint(31) == isprint(127));
}
