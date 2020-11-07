/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:37:36 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 17:23:17 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
//{
//	unsigned	int		i;
//	unsigned	char	*destination;
//	unsigned	char	*sorce;
//
//	destination = (unsigned char *)dst;
//	sorce = (unsigned char *)src;
//	i = 0;
//	while (i < n && (dst != (void *)0 || src != (void *)0))
//	{
//		destination[i] = sorce[i];
//		i++;
//	}
//	return (dst);
//}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int src_len;
	unsigned int dst_len;
	unsigned int i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
	{
		dst[i] = '\0';
	}
	return (src_len);
}
