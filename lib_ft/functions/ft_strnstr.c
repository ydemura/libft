/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydemura <ydemura@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/22 09:04:16 by ydemura       #+#    #+#                 */
/*   Updated: 2020/08/22 09:55:08 by ydemura       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strnstr() function locates the first occurrence of the null-terminated string needle in the
//	 string haystack, where not more than len characters are searched.  Characters that appear after a
//	 `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should
//	 only be used when portability is not a concern.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
		
	if (needle[j] == 0)
	{
		return (haystack);
	}
	while ((haystack[i] != '\0') && (i < len))
	{
	j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
