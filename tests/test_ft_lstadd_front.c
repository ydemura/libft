//
//  test_ft_lstadd_front.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/12/20.
//

//Parameters 	#1. The address of a pointer to the first link of a list.
//				#2. The address of a pointer to the element to be added to the list.
//Return value None
//External functs. None
//Description Adds the element ’new’ at the beginning of the list.


//Access members of a structure
//There are two types of operators used for accessing members of a structure.

//. - Member operator
//-> - Structure pointer operator (will be discussed in the next tutorial)

//typedef struct	s_list
//{
//	void 		*content;
//	struct 		s_list *next;
//} 				t_list;

#include "test_libft.h"
#include <stdio.h>

void	test_ft_lstadd_front(void)
{
	
}


//static	t_list		*ft_lst_last(t_list *lst)
//{
//	while (lst->next != 0)
//	{
//		lst = lst->next;
//	}
//	return (lst);
//}

//void				ft_lstadd_front(t_list **lst, t_list *new)
//{
//	t_list *last_element_of_new;
//
//	last_element_of_new = ft_lst_last(new);
//	last_element_of_new->next = *lst;
//	*lst = new;
//}

