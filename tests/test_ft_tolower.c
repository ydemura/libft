//
//  test_ft_tolower.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_tolower(void)
{
	assert(ft_tolower('A') == 'a');
	assert(ft_tolower('1') == '1');
	assert(ft_tolower('a') == 'a');
}
