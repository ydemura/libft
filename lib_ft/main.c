//   main.c

//   By: julia <julia@student.codam.nl>


#include "test_libft.h"
#include "libft.h"

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
	test_ft_memccpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstsize();
	
	
	
	
//	char s[] = "1234test9";
//	char *sub_str;
//	int start = 4; //it is INDEX (ind 4 == int 5)
//	int len = 4;
//	sub_str = ft_substr(s, start, len);
//
//	printf("%s\n%s\n", s, sub_str);
	
//	char str[] = "testme";
//	char *test = str;
//	char *afterf_test;
//	afterf_test = strdup(test);
//
//	printf("%s\n%s\n", test, afterf_test);
//
//	free(afterf_test);
	
//	char str[50] = "hk";
//	char *test = str;
//	test = ft_strdup(test);
//
//	printf("%s\n", test);
//	printf("%s\n", str);
//
	
//	int *ptr;
//	int *ptr1;
//	int n;
//	n = 5;
//
//	ptr = ft_calloc(n, sizeof(ptr));
//	ptr1 = calloc(n, sizeof(ptr1));
//	assert(ptr[0] == ptr1[8]);
//	printf("%i\n%i\n", ptr[0], ptr1[0]);
//	free(ptr);
//	free(ptr1);

//
//	char dst[50] = "aaaaa"; // 5
//	char src[] = "123456789"; // 9
//	int destsize = 15;
//
//	char dst1[50] = "aaaaa"; // 5
//	char src1[] = "123456789"; // 9
//	int destsize1 = 15;
	
//	char dst[50] = "destination"; //11
//	char src[] = "copyit"; //6
//	int destsize = 0;
//	char dst1[50] = "destination"; //11
//	char src1[] = "copyit"; //6
//	int destsize1 = 0;
	
	
//	assert(ft_strlcat(dst, src, destsize) == 6);
//	assert(ft_strncmp(dst, "destination", 20) == 0);
	
//	printf("f: %lu\n", strlcat(dst, src, destsize));
//	printf("my: %lu\n", ft_strlcat(dst1, src1, destsize1));
//	printf("%s\n%s\n", dst, dst1);
	
	
//	char dst[50] = "destination"; //11
//	char src[50] = "copyit"; //6
//	int destsize = 0;

//	assert(strlcat(dst, src, destsize) == 17);
//	assert(ft_strncmp(dst, "destinationcopyit", 20) == 0);

//	printf("%lu\n", strlcat(dst, src, destsize));
//	printf("%s\n", dst);
	
	
	
	
//	char dst[] = "dest";
//	char src[] = "checkthis";
//	int dstsize = 4;
//
//	ft_strlcpy(dst, src, dstsize);
//	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
//	printf("%s\n", dst);

//	char dst[] = "";
//	char src[] = "check";
//	int dstsize = 0;
//
//	ft_strlcpy(dst, src, dstsize);
//	assert(ft_strncmp(dst, "", 10) == 0);
//
//	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
//	printf("%s\n", dst);

//	char dst[] = "destination";
//	char src[] = "copythis";
//	int dstsize = 11;

//	char dst[] = "";
//	char src[] = "check";
//	int dstsize = 0;

//	printf("%lu\n", strlcpy(dst, src, dstsize));
//	printf("%s\n", dst);

	
	
	
//	char s1[] = "abbbbb";
//	char s2[] = "Abbbbb";
//	int n = 4;
//
//	printf("fu: %i\nmy: %i\n", memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
	
	
	
//	char s1[] = "";
//	char s2[] = "";
//	int n = 4;

//	printf("%i\n", memcmp(s1, s2, n));
	
	
	
//	char s[] = "testme";
//	printf("%p\n", ft_memchr(s, 'm', 0));
//	printf("%p\n", memchr(s, 'm', 0));
	
	
//	char dest[] = "123456789";
//	char src[] = "abcde";
//	char dest2[] = "123456789";
//	char src2[] = "abcde";
	
//	char string[] = "1234567890";
//	char *dest = &string[1];
//	char *src = &string[5];

//	printf("my f: %s\n", ft_memmove(dest, src, 7));
//	printf("f: %s\n", memmove(dest, src, 7));

	
//	printf("original f: %s\n", memmove(dest2, src2, 6));
//	printf("\nmy: %s\noriginal: %s\n\n", dest, dest2);
	
	
//	char string1[] = "123456789";
//	char another_string1[] = "abcde";
//	char string2[] = "123456789";
//	char another_string2[] = "abcde";
//	char c = 'e';
//	printf("my: %s\n", ft_memccpy(string1, another_string1, c, 6));
//	printf("original: %s\n", memccpy(string2, another_string2, c, 6));
//	printf("my: %s\noriginal: %s\n", string1, string2);
	
//	char string1[] = "aaaaaaaaaaaaaaaaaa";
//	char another_string1[] = "bbbbbbb";
//	char string2[] = "aaaaaaaaaaaaaaaaaa";
//	char another_string2[] = "bbbbbbb";
//	printf("%s\n", ft_memcpy(string1, another_string1, 4));
//	printf("%s\n", memcpy(string2, another_string2, 4));

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
