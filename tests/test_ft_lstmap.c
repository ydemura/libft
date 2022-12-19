//
//  test_ft_lstmap.c
//  lib_ft
//
//  Created by Julia on 18.11.2020.
//

//Parameters
//	#1. The adress of a pointer to an element.
//	#2. The adress of the function used to iterate on the list.
//	#3. The adress of the function used to delete the content of an element if needed.

//Return value The new list. NULL if the allocation fails.
//External functs. malloc, free

//Description Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

#include "test_libft.h"

void	*for_test_strchr(void *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		str[i] = 'T';
		i++;
	}
	return (str);
}

void	test_ft_lstmap(void)
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	l->next = ft_lstnew(strdup("ss"));
	l->next->next = ft_lstnew(strdup("-_-"));
//	printf("%s\n", l->content);
//	printf("%s\n", l->next->content);
//	printf("%s\n\nafter:\n", l->next->next->content);
	
	t_list *ret;
	ret = ft_lstmap(l, for_test_strchr, ((void *)0));
//	printf("%s\n", l->content);
//	printf("%s\n", l->next->content);
//	printf("%s\n", l->next->next->content);
	
//	printf("%s\n", ret->content);
//	printf("%s\n", ret->next->content);
//	printf("%s\n", ret->next->next->content);
}


//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
//{
//	t_list *new_lst_element;
//	t_list *new_lst;
//	t_list *new_prev_elem;
//
//	new_lst = 0;
//	new_lst_element = 0;
//	if (lst && f && del)
//	{
//		while (lst)
//		{
//			new_prev_elem = new_lst_element;
//			new_lst_element = malloc(sizeof(t_list));
//			if (new_lst_element == 0)
//				return (0);
//			if (new_lst == 0)
//				new_lst = new_lst_element;
//			if (new_prev_elem != 0)
//				new_prev_elem->next = new_prev_elem;
//			new_lst_element->content =        (*f)(lst->content);
//			new_lst_element->next = 0;
//			lst = lst->next;
//		}
//		return (new_lst);
//	}
//	return (0);
//}
