//
//  test_ft_lstnew.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/12/20.
//

//Prototype t_list *ft_lstnew(void *content);
//Turn in files -
//Parameters 	#1. The content to create the new element with.

//Return value The new element.

//External functs. malloc

//Description Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

//. - Member operator
//-> - Structure pointer operator

//typedef struct	s_list
//{
//	void 		*content;
//	struct 		s_list *next;
//} 				t_list;

//typedef struct	s_list
//{
//	void 		*content;
//	struct 		s_list *next;
//} 				t_list;

#include "test_libft.h"
#include <stdio.h>

void	test_ft_lstnew1(void)
{
	int n = 42;
	int *ptr;
	ptr = &n;
	
	t_list *testptr;
	
	testptr = ft_lstnew(ptr);
	
	int *b = testptr->content;
	assert(*b == 42);
	
}

void	test_ft_lstnew2(void)
{
	int n = 0;
	int *ptr;
	ptr = &n;
	
	t_list *testptr;
	
	testptr = ft_lstnew(ptr);
	
	int *b = testptr->content;
	assert(*b == 0);
	
}

void	test_ft_lstnew(void)
{
	test_ft_lstnew1();
	test_ft_lstnew2();
}


// EXAMPLE
//t_list	*ft_lstnew(void *content)
//{
//	t_list *try_list;
//
//	(*try_list).content = content;
//	(*try_list).next = NULL;
//
//
//	t_list	*next_list;
//
//	next_list = malloc(sizeof(t_list));
//	if (!next_list)
//	{
//		return (0);
//	}
//	next_list->content = content;
//	next_list->next = NULL;
//	return (next_list);
//}
