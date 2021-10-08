NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_intlen.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strrev.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJ = $(SRC:.c=.o) 
RM = rm -f

all: ${NAME}

${NAME}: 
			${CC} ${FLAGS} -c ${SRC}
			${AR} ${NAME} ${OBJ}
			echo 'Archive created, object files created'
clean:	
			${RM} ${OBJ}
			echo 'Object files cleaned'

fclean: clean
			${RM} ${NAME}
			echo 'Archive cleaned'

re: fclean all

.PHONY: all, clean, fclean, re

