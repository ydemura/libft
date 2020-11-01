/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydemura <ydemura@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:04:16 by ydemura       #+#    #+#                 */
/*   Updated: 2020/11/01 09:55:08 by ydemura       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int len;
	int i;
	char *s2;
	
	i = 0;
	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	s2 = (char *)malloc(len * sizeof(char));
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
