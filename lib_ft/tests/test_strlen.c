//
//  test_strlen.c
//  libft
//
//  Created by Julia on 27.10.2020.
//

#include "test_libft.h"
//#include "lib_ft.h"
//#include <assert.h>

void test_ft_strlen(void)
{
	assert(5 == ft_strlen("12345"));
	assert(6 == ft_strlen("abch16"));
	assert(3 == ft_strlen("H-)"));
	assert(0 == ft_strlen(""));
	assert(1 == ft_strlen("\n"));
	assert(63 == ft_strlen("12345kasjkhadkdjdjhadhuadladhadkhkhashjgskhshkshasKHaskhjsdkhsh"));
}
