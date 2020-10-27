/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:51:43 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 19:31:16 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib_ft.h"
#include <stdio.h>

int main()
{
	test_ft_strlen();
	test_ft_is_alpha();
	test_ft_strncmp();
	test_ft_is_digit();
	
//	char str[] = "";
//	char str2[] = "j";
//	int n = 1;
//	printf("function: %i\nmy: %i\n", strncmp(str, str2, n), ft_strncmp(str, str2, n));
	
	return (0);
}
