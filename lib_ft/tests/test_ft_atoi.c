//
//  test_ftatoi.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"

void	test_ft_atoi(void)
{
	assert(ft_atoi("-156789") == atoi("-156789"));
	assert(ft_atoi("   1567pt89") == atoi("   1567pt89"));
	assert(ft_atoi("--156789") == atoi("--156789"));
	assert(ft_atoi(" 	-+-156789") == atoi(" 	-+-156789"));
}
