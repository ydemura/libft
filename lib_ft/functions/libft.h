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

#include <sys/types.h>

int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n); // !!!! UNFINISHED
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

#endif // LIB_FT_H
