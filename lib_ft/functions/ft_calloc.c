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

void	*ft_memset_check(void *b, int c, size_t len)
{
	unsigned	int		i;
	unsigned	char	*temp;

	temp = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

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
//	return (&*result);
//	ft_bzero(result, count * size);
	return (&*result);
}
