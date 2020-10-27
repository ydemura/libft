/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:51:43 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 19:31:16 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;
	signed		int difference;
	
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			return (difference);
		}
		i++;
	}
	return (0);
}
