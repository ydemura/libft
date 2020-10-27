/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: julia <julia@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:48:18 by julia         #+#    #+#                 */
/*   Updated: 2020/10/26 19:57:48 by julia         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_H
#define LIB_FT_H

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);

#endif // LIB_FT_H
