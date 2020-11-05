//
//  test_ft_putnbr_fd.c
//  lib_ft
//
//  Created by Yuliia Demura on 11/5/20.
//

//Parameters 	#1. The integer to output.
//				#2. The file descriptor on which to write.
//Return value None
//External functs. write

//Description Outputs the integer ’n’ to the given file descriptor.



#include <stdio.h>
#include "test_libft.h"
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

void	test_ft_putnbr_fd(void)
{
	int n;
	int n2;
	int fd;
	
	n = -2147483648;
	n2 = 0;
	fd = open("test_putnbr_fd.txt", O_RDWR | O_CREAT);
	if (fd == -1)
	{
		printf("%s\n", "not opened :(");
	}
	if (fd > 0)
	{
		printf("%s\n", "opened ^___^");
	}
	ft_putnbr_fd(n, fd);
	ft_putnbr_fd(n2, fd);
	
	int close(int fd);
	if (fd == -1)
	{
		printf("%s\n", "not closed :(");
	}
	if (fd >= 0)
	{
		printf("%s\n", "closed ^___^");
	}
	
}
