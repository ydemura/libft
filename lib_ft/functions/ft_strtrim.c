/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydemura <ydemura@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:04:16 by ydemura       #+#    #+#                 */
/*   Updated: 2020/11/01 09:55:08 by ydemura       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_set;
	int		len_s1;
	char	*start_set_in_s1;
	char	*s2;

	i = 0;
	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	start_set_in_s1 = ft_strnstr(s1, set, len_s1);
	s2 = (char *)malloc((len_set + 1) * sizeof(char));
	if (start_set_in_s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (start_set_in_s1[i] == set[i])
	{
		s2[i] = start_set_in_s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
