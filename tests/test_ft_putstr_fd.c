//
//  test_ft_putstr_fd.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/5/20.
//
//Parameters 	#1. The string to output.
//				#2. The file descriptor on which to write.
//Return value None

//External functs. write
//Description Outputs the string ’s’ to the given file descriptor.

//				ssize_t write(int fildes, const void *buf, size_t nbytes);

//int fildes
// The file descriptor of where to write the output. You can either use a file descriptor obtained from the open system call, or you can use 0, 1, or 2, to refer to standard input, standard output, or standard error, respectively.

//const void *buf
//	A pointer to a buffer of at least nbytes bytes, which will be written to the file.

//size_t nbytes
//	The number of bytes to write. If smaller than the provided buffer, the output is truncated.

//return value
//	Returns the number of bytes that were written. If value is negative, then the system call returned an error.

#include "test_libft.h"
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

void	test_ft_putstr_fd(void)
{
//	char s[20] = "testmeyuliia";
//
//	int fd1 = open("test_ft_putstr_fd.txt", O_RDWR | O_CREAT);
//	if (fd1 == -1)
//	{
//		printf("%s\n", "not opened :((");
//	}
//	if (fd1 > 0)
//	{
//		printf("%s\n", "opened ^__^");
//	}
//	ft_putstr_fd(s, fd1);
//	int	close(int fd1);
//	if (fd1 >= 0)
//	{
//		printf("\n%s\n", "closed ^__^");
//	}
//	if (fd1 < 0)
//	{
//		printf("\n%s\n", "not closed :(!");
//	}
	
}
