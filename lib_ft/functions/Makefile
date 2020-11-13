# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydemura <ydemura@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/12 21:16:31 by ydemura       #+#    #+#                  #
#    Updated: 2020/11/13 22:56:42 by julia         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o\
ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o\
ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o\
ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_strdup.o\
ft_substr.o ft_strjoin.o ft_split.o ft_strtrim.o ft_itoa.o ft_strmapi.o\
ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
BONUS_FILES = ft_lstsize.o

# ft_lstnew.o, ft_lstadd_front.o, ft_lstsize.o 

# issue! make: *** No rule to make target `ft_lstadd_front.o,', needed by `bonus'.  Stop.
# when 1 bonus file no issuewhen 2nd added - this error

LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
HEADER_FILES = libft.h

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(LIBC) $(NAME) $(OBJ_FILES)

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(FLAGS) -o $@ $<

bonus: all $(BONUS_FILES)
	$(LIBC) $(NAME) $(BONUS_FILES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

