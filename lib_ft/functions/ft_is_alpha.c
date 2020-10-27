/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_alpha.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:25:29 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 17:49:50 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//function tests for any character for which isupper(3) or islower(3) is true.  
//The value of the argument must be representable as an unsigned char or the value of EOF.
//returns zero if the character tests false 
//returns non-zero if the character tests true.

#include "lib_ft.h"

int		ft_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			return (1);
		}
		else
		{
			i++;
		}
		
	}
	return (0);
}
