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

//void	ft_bzero(void *s, size_t n);

//Number of arguments: Unlike malloc(), calloc() takes two arguments:
//1) Number of blocks to be allocated.
//2) Size of each block.

//Return Value: After successful allocation in malloc() and calloc(), a pointer to the block of memory is returned otherwise NULL value is returned which indicates the failure of allocation.

void	*ft_calloc(size_t count, size_t size)
{
	int *result;
	result = (int*)malloc(count * size);
	ft_bzero(result, count);
	
	if (result == NULL)
	{
		return (0);
	}
	return (result);
}
