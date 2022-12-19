//
//  test_ft_isascii.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_isascii(void)
{
	assert(ft_isascii('a') == isascii('1'));
	assert(ft_isascii('a') == 1);
	assert(ft_isascii(128) == isascii(128));
	assert(ft_isascii(-12) == 0);
}
