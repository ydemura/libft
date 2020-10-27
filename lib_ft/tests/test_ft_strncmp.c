//
//  test_ft_strncmp.c
//  libft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"



void	test_ft_strncmp(void)
{
	assert(strncmp("aq", "ab", 1) == ft_strncmp("aq", "ab", 1));
	assert(strncmp("AZ!#FDGCVs", "AZ!#FDGCVl", 1) == ft_strncmp("AZ!#FDGCVs", "AZ!#FDGCVl", 1));
	assert(strncmp("", "", 1) == ft_strncmp("", "", 1));
}
