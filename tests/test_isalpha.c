//
//  test_isalpha.c
//  libft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_isalpha(void)
{
	assert(1 == ft_isalpha('a'));
	assert(1 == ft_isalpha('A'));
	assert(0 == ft_isalpha('4'));
	assert(0 == ft_isalpha(' '));
}
