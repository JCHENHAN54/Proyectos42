# MakeFiles Settings #

SHELL = /bin/sh
NAME = libft.a
RM = rm -f
COMPILE_FLAGS = gcc -Wall -Wextra -Werror
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_bzero.c\
		 ft_toupper.c ft_tolower.c ft_isprint.c ft_memmove.c ft_memcpy.c ft_memset.c\
		 ft_atoi.c ft_strlcpy.c ft_strlcat.c

OBJECT = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME): $(OBJECT) libft.h
	ar -rcs $(NAME) $(OBJECT)
	
$(OBJECT): $(SOURCE)
	$(COMPILE_FLAGS) -c $(SOURCE)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
