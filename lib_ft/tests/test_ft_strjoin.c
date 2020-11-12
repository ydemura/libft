//
//  test_ft_strjoin.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/1/20.
//

//Parameters 	#1. The prefix string.
//				#2. The suffix string.

//Return value The new string. NULL if the allocation fails.
//External functs. malloc
//Description Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

#include "test_libft.h"

void	test_ft_strjoin(void)
{
	char s1[] = "aaa";
	char s2[] = "bbb";
	
	char *new_str;
	new_str = ft_strjoin(s1, s2);

//	printf("%s\n%s\n%s\n", s1, s2, new_str);
	assert(strcmp(new_str, "aaabbb") == 0);
}

   

//before cut to norm size

//#include "libft.h"
//#include <stdlib.h>
//
//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	char	*new_str;
//	int		len_s1;
//	int		len_s2;
//	int		i;
//	int		j;
//
//	len_s1 = ft_strlen(s1);
//	len_s2 = ft_strlen(s2);
//	i = 0;
//	j = 0;
//	new_str = (char *)malloc(((len_s1 + len_s2) + 1) * sizeof(char));
//	if (new_str == NULL)
//	{
//		return (NULL);
//	}
//	while (i < len_s1)
//	{
//		new_str[i] = s1[i];
//		i++;
//	}
//	while (j < len_s2)
//	{
//		new_str[i] = s2[j];
//		i++;
//		j++;
//	}
//	new_str[i] = '\0';
//	return (new_str);
//}
