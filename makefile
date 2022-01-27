OBG_B = ${SRCS_B:.c=.o}
SRCS = ft_isalpha.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_strnstr.c ft_isdigit.c \
ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_strchr.c ft_tolower.c ft_toupper.c \
ft_memset.c ft_memchr.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_memcpy.c ft_isprint.c ft_memmove.c \
ft_strrchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c  ft_putnbr_fd.c\
ft_strmapi.c ft_striteri.c

OBG = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
AR = ar -rc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf


%.o : %.c
	   @${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBG}
		@${AR} $@ ${OBG} 
all: ${NAME}

bonus: ${OBG_B}
	${AR} ${NAME} ${OBG_B}

clean:
		${RM} ${OBG} ${OBG_B}

fclean: clean
		${RM} ${NAME}

re:	fclean all