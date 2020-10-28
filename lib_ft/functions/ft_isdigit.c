/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:51:43 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 19:31:16 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}