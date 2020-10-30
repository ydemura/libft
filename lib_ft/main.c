//   main.c

//   By: julia <julia@student.codam.nl>


#include "test_libft.h"

int main()
{
	test_ft_strlen();
	test_ft_isalpha();
	test_ft_strncmp();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_atoi();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strnstr();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	
	char string1[] = "aaaaaaaaaaaaaaaaaa";
	char another_string1[] = "bbbbbbb";
	char string2[] = "aaaaaaaaaaaaaaaaaa";
	char another_string2[] = "bbbbbbb";
	printf("%s\n", ft_memcpy(string1, another_string1, 4));
	printf("%s\n", memcpy(string2, another_string2, 4));

//	char str[] = "";
//	char str2[] = "j";
//	int n = 1;
//	printf("function: %i\nmy: %i\n", strncmp(str, str2, n), ft_strncmp(str, str2, n));
//	printf("function: %i\nmy: %i\n", atoi(" 	-015fgfdf"), ft_atoi("	 	-015fdgd"));

//	printf("function: %s\nmy: %s\n", strnstr("findneedle", "dne", 3), ft_strnstr("findneedle", "dne", 3));
//	printf("function: %s\nmy: %s\n", strchr("check", 'h'), ft_strchr("check", 'h'));
//	printf("function: %s\nmy: %s\n", strrchr("hereisstring12", 'r'), ft_strrchr("hereisstring12", 'r'));

//	printf("%s\n%s", bzero("ptr", 2), ft_bzero("ptr", 2))


	return (0);
}
