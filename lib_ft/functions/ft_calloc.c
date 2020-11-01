/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:37:36 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 17:23:17 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void				*result;
	int					i;
	unsigned	char	*temp;
	unsigned	long	number_of_memory;
	
	number_of_memory = (count) * (size);
	result = malloc(number_of_memory);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	temp = (unsigned char*)result;
	while (i < number_of_memory)
	{
		temp[i] = 0;
		i++;
	}
	return (&*result);
}
