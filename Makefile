OBJS_DIR = obj/
INCS_DIR = include/
INC = libft.h
NAME = libft.a

SRCS += ft_atoi.c
SRCS += ft_isascii.c
SRCS += ft_memccpy.c
SRCS += ft_memset.c 
SRCS += ft_putstr_fd.c
SRCS += ft_strjoin.c
SRCS += ft_strncmp.c
SRCS += ft_substr.c
SRCS += ft_bzero.c
SRCS += ft_isblank.c
SRCS += ft_memchr.c 
SRCS += ft_split.c
SRCS += ft_strlcat.c
SRCS += ft_strncpy.c
SRCS += ft_tolower.c
SRCS += ft_calloc.c 
SRCS += ft_isdigit.c
SRCS += ft_memcmp.c 
SRCS += ft_putchar_fd.c 
SRCS += ft_strchr.c 
SRCS += ft_strlcpy.c
SRCS += ft_strnstr.c
SRCS += ft_toupper.c
SRCS += ft_isalnum.c
SRCS += ft_isprint.c
SRCS += ft_memcpy.c 
SRCS += ft_putendl_fd.c 
SRCS += ft_strcpy.c 
SRCS += ft_strlen.c 
SRCS += ft_strrchr.c
SRCS += ft_isalpha.c
SRCS += ft_itoa.c
SRCS += ft_memmove.c
SRCS += ft_putnbr_fd.c
SRCS += ft_strdup.c 
SRCS += ft_strmapi.c
SRCS += ft_strtrim.c

BONUS_SRCS += ft_lstnew.c
BONUS_SRCS += ft_lstadd_front.c
BONUS_SRCS += ft_lstsize.c
BONUS_SRCS += ft_lstlast.c
BONUS_SRCS += ft_lstadd_back.c
BONUS_SRCS += ft_lstdelone.c
BONUS_SRCS += ft_lstclear.c
BONUS_SRCS += ft_lstiter.c
BONUS_SRCS += ft_lstmap.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

DIROBJS = $(addprefix ${OBJS_DIR},${OBJS})
BONUS_DIROBJS = $(addprefix ${OBJS_DIR},${BONUS_OBJS})

CC = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : ${DIROBJS}
	ar rcs ${NAME} ${DIROBJS}

${DIROBJS}: ${OBJS_DIR}%.o: %.c ${OBJS_DIR}
	${CC} -I ${INCS_DIR} -c $< -o $@

${BONUS_DIROBJS}: ${OBJS_DIR}%.o: %.c ${OBJS_DIR}
	${CC} -I ${INCS_DIR} -c $< -o $@

${OBJS_DIR}:
	mkdir $@

clean:
	rm -rf ${DIROBJS} ${BONUS_DIROBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

bonus:	${DIROBJS} ${BONUS_DIROBJS}
		ar rcs ${NAME} ${DIROBJS} ${BONUS_DIROBJS} ${NAME}

.PHONY: all clean fclean re bonus
