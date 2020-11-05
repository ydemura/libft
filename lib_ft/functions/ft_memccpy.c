/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:37:36 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 17:23:17 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
					const void *restrict src, int c, size_t n)
{
	unsigned	int		i;
	unsigned	char	*destination;
	unsigned	char	*sorce;

	i = 0;
	destination = (unsigned char *)dst;
	sorce = (unsigned char *)src;
	while (i < n)
	{
		destination[i] = sorce[i];
		if (c == sorce[i])
		{
			return (&dst[i + 1]);
		}
		i++;
	}
	return (0);
}
