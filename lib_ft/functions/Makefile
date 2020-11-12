NAME = libft.a
OBJ_FILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o\
ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o\
ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o\
ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_strdup.o\
ft_substr.o ft_strjoin.o ft_split.o ft_strtrim.o ft_itoa.o ft_strmapi.o\
ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
HEADER_FILES = libft.h

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(LIBC) $(NAME) $(OBJ_FILES)

# $(NAME): $(OBJ_FILES)
# 	$(CC) $(FLAGS) -o $@ $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(FLAGS) -o $@ $<

# $(NAME): $(OBJ_FILES) $(HEADER) //another option for library
# 	ar libft(*.o)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re