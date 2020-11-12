//
//  test_ft_putchar_fd.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/5/20.
//
//Parameters 	#1. The character to output.
//				#2. The file descriptor on which to write.
//Return value None
//External functs. write
//Description Outputs the character ’c’ to the given file descriptor.


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

void	test_ft_putchar_fd(void)
{
	
//	[KO]: your putchar_fd does not work with unicode
//	Test code:
//		char buff[10];
//		char buff2[10];
//		int c = L'ø';
//		int len = 0;
//
//		putwchart(c, &len, buff2);
//		buff2[len] = 0;
//		fd_to_buffer(2);
//		ft_putchar_fd(c, 2);
//		write(2, "", 1);
//		get_fd_buffer(2, buff, 10);
//		if (!strcmp(buff, buff2))
//			exit(TEST_SUCCESS);
//		exit(TEST_KO);
	
	
//	int fd = open("test_file.txt", O_RDWR | O_CREAT); //it is creating the file but I cannot open it
//	if (fd == -1)
//	{
//		printf("%s\n", "ooops it is not opened");
//	}
//	if (fd > 0)
//	{
//		printf("%s\n", "opened");
//	}
//	char c;
//	c = 'a';
//	ft_putchar_fd(c, fd);
//	ft_putchar_fd('c', fd);
//	ft_putchar_fd('1', fd);
//	ft_putchar_fd('2', fd);
//	ft_putchar_fd(L'ø', fd);
//
//	int close(int fd);
//	if (fd == -1)
//	{
//		printf("%s\n", "ooops it is not CLOSED");
//	}
//	if (fd > 0)
//	{
//		printf("%s\n", "closed");
//	}
//
}
