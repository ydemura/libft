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

#include "test_libft.h"

int main()
{
	test_ft_strlen();
	test_ft_isalpha();
	test_ft_strncmp();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_atoi();
	test_ft_toupper();
	test_ft_tolower();
	
//	char str[] = "";
//	char str2[] = "j";
//	int n = 1;
//	printf("function: %i\nmy: %i\n", strncmp(str, str2, n), ft_strncmp(str, str2, n));
		
	
//	printf("function: %i\nmy: %i\n", atoi(" 	-015fgfdf"), ft_atoi("	 	-015fdgd"));
	return (0);
}
