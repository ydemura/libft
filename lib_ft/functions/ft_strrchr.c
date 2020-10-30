/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:37:36 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 17:23:17 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;
	
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	if (s[len + 1] == '\0' && c == '\0')
	{
		return (&s[len]);
	}
	while (len > 0)
	{
		if (s[len] == c)
		{
			return (&s[len]);
		}
		len--;
	}
	return (NULL);
}
