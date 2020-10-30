//
//  test_ft_strchr.c
//  lib_ft
//
//  Created by Yuliia Demura on 10/29/20.
//

 //strchr, strrchr -- locate character in string

//The strchr() function locates the first occurrence of c (converted to a char) in the string
//pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

//The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

//The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.

#include "test_libft.h"

void test_ft_strchr(void)
{
	assert(ft_strchr("hereisstring12", 'r') == strchr("hereisstring12", 'r'));
	assert(ft_strchr("", 'r') == strchr("", 'r'));
	assert(ft_strchr("hereisstring12", 'e') == strchr("hereisstring12", 'e'));
	assert(ft_strchr("hereisstring12", 'H') == strchr("hereisstring12", 'H'));
}
