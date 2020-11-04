//
//  test_ft_strtrim.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//

//Parameters 	#1. The string to be trimmed.
//				#2. The reference set of characters to trim.

//Return value The trimmed string. NULL if the allocation fails.
//External functs. malloc

//Description Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

#include "test_libft.h"

void	test_ft_strtrim1(void)
{
	char s1[] = "I20 A string 02I A";
	char set[] = "A2I0 ";

	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string: %s\nset: %s\nafter f: %s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, "string", 20) == 0);
}

void	test_ft_strtrim2(void)
{
	char s1[] = "I20 A stAriIng 02I A";
	char set[] = "A2I0 ";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string:%s\nset:%s\nafter f:%s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, "stAriIng", 20) == 0);
}

void	test_ft_strtrim3(void)
{
	char s1[] = "stAriIng 02I A";
	char set[] = "A2I0 ";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string:%s\nset:%s\nafter f:%s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, "stAriIng", 20) == 0);
}

void	test_ft_strtrim4(void)
{
	char s1[] = "stAriIng";
	char set[] = "A2I0 ";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string:%s\nset:%s\nafter f:%s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, "stAriIng", 10) == 0);
}

void	test_ft_strtrim5(void)
{
	char s1[] = "*st?ri00000n!g!&?";
	char set[] = " | *&	0?! ";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string:%s\nset:%s\nafter f:%s\n", s1, set, new_str);
	assert(ft_strncmp(new_str, "st?ri00000n!g", 15) == 0);
}

void	test_ft_strtrim6(void)
{
	char s1[] = "* !&?";
	char set[] = " | *&	0?! ";
	
	char *new_str;
	new_str = ft_strtrim(s1, set);

//	printf("string:%s\nset:%s\nafter f:%s\n", s1, set, new_str);
//	assert(ft_strtrim(s1, set) == NULL);
}

void	test_ft_strtrim(void)
{
	test_ft_strtrim1();
	test_ft_strtrim2();
	test_ft_strtrim3();
	test_ft_strtrim4();
	test_ft_strtrim5();
	test_ft_strtrim6();
}


// OLD VERSIOM + NEW ALLTOGETHER
//
//#include "libft.h"
//#include <stdlib.h>
//
//int		ft_start_search(char const *s1, char const *set)
//{
//	int i;
//	int start;
//
//	i = 0;
//	start = 0;
//	while (s1[i] != '\0')
//	{
//		if (ft_memchr(set, s1[i], ft_strlen(set)) == NULL)
//		{
//			start = i;
//			return (start);
//		}
//		i++;
//	}
//	return (0);
//}
//
//int		ft_end_search(char const *s1, char const *set)
//{
//	int i;
//	int end;
//	int len_s1;
//
//	i = 0;
//	end = 0;
//	len_s1 = ft_strlen(s1);
//	while (i < len_s1)
//	{
//		if (ft_memchr(set, s1[len_s1 - 1], ft_strlen(set)) == NULL)
//		{
//			end = len_s1;
//			return (end);
//		}
//		len_s1--;
//	}
//	return (0);
//}
//
//char	*ft_strtrim(char const *s1, char const *set)
//{
//	int				i;
//	int 			j;
//	int				len_s1;
//	int				len_s2;
//	char			*s2;
//	int				start;
//	int				end;
//
////	i = 0;
////	len_s1 = ft_strlen(s1);
//	start = ft_start_search(s1, set);
//
////	while (s1[i] != '\0')
////	{
////		if (ft_memchr(set, s1[i], ft_strlen(set)) == NULL)
////		{
////			start = i;
////			break;
////		}
////		i++;
////	}
//
//	end = ft_end_search(s1, set);
////	while (i < len_s1)
////	{
////		if (ft_memchr(set, s1[len_s1 - 1], ft_strlen(set)) == NULL)
////		{
////			end = len_s1;
////			break;
////		}
////		len_s1--;
////	}
//
////	len_s2 = len_s1 - i;
//
//	len_s2 = end - start;
//	s2 = (char *)malloc((len_s2 + 1) * sizeof(char));
//	if (s2 == NULL)
//	{
//		return (NULL);
//	}
//	j = 0;
//	while (start < end)
//	{
//		s2[j] = s1[start];
//		start++;
//		j++;
//	}
////	while (i < len_s1)
////	{
////		s2[j] = s1[i];
////		i++;
////		j++;
////	}
//	s2[j] = '\0';
//	return (s2);
//}
