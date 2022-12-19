//
//  test_ftatoi.c
//  lib_ft
//
//  Created by Julia on 27.10.2020.
//

//The atoi() function converts the initial portion of the string pointed to
//by str to int representation.

#include "test_libft.h"

//[KO]: your atoi does not work with over long max value
//[KO]: your atoi does not work with over long min value

//[KO]: your atoi does not work with over long max value
//Test code:
//	char n[40] = "99999999999999999999999999";
//	int i1 = atoi(n);
//	int i2 = ft_atoi(n);
//
//	if (i1 == i2)
//		exit(TEST_SUCCESS);
//	exit(TEST_KO);
//
//Diffs:
//        atoi: |-1|
//     ft_atoi: |-469762049|



//[KO]: your atoi does not work with over long min value
//Test code:
//	char n[40] = "-99999999999999999999999999";
//	int i1 = atoi(n);
//	int i2 = ft_atoi(n);
//
//	if (i1 == i2)
//		exit(TEST_SUCCESS);
//	exit(TEST_KO);
//
//Diffs:
//        atoi: |0|
//     ft_atoi: |469762049|

void	test_ft_atoi1(void)
{
	assert(ft_atoi("-156789") == atoi("-156789"));
	assert(ft_atoi("   1567pt89") == atoi("   1567pt89"));
	assert(ft_atoi("--156789") == atoi("--156789"));
	assert(ft_atoi(" 	-+-156789") == atoi(" 	-+-156789"));
}

void	test_ft_atoi2(void)
{
	char n[] = "\t\v\f\r\n \f-06050";
//	int i1 = atoi(n);
//	int i2 = ft_atoi(n);
	//printf("or: %i\nmy: %i\n", i1, i2);
	assert( atoi(n) == ft_atoi(n));
	
}

void	test_ft_atoi3(void)
{
	char n[] = "-99999999999999999999999999"; //-2147483648 - max symbols 11
//	int i1 = atoi(n);
//	int i2 = ft_atoi(n);
//	printf("or: %i\nmy: %i\n", i1, i2);
	assert( atoi(n) == ft_atoi(n));
}

void	test_ft_atoi4(void)
{
	char n[40] = "2147483647";
//	int i1 = atoi(n);
//	int i2 = ft_atoi(n);
//	printf("or: %i\nmy: %i\n", i1, i2);
	assert( atoi(n) == ft_atoi(n));
}

void	test_ft_atoi(void)
{
	test_ft_atoi1();
	test_ft_atoi2();
	test_ft_atoi3();
	test_ft_atoi4();
}

//int		ft_atoi(const char *str)
//{
//	int i;
//	int n;
//	int res;
//
//	i = 0;
//	while (str[i] == 32 || (str[i] >= 8 && str[i] <= 14))
//		i++;
//	n = 0;
//	if ((str[i] == '-') || (str[i] == '+'))
//	{
//		if (str[i] == '-')
//			n++;
//		i++;
//	}
//	res = 0;
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		res = res * 10 + (str[i] - '0');
//		if (res > 2147483647 / 10)
//		{
//			return (-1);
//		}
//		if (res * - 1 < -2147483648 / 10)
//		{
//			return (0);
//		}
//		i++;
//	}
//	if (n == 1)
//		res = res * -1;
//	return (res);
//}
