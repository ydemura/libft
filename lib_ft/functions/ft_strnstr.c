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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*ptr_haystack;
	char	*ptr_needle;

	i = 0;
	j = 0;
	ptr_haystack = (char *)haystack;
	ptr_needle = (char *)needle;
	if (needle[j] == 0)
		return (ptr_haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&ptr_haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
