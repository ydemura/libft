//
//  test_ft_isalnum.c
//  libft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_isalnum(void)
{
	assert(ft_isalnum('a') == isalnum('1'));
	assert(ft_isalnum('a') == 1);
}
