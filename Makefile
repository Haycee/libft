SRCS	= ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_atoi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strdup.c \
ft_strjoin.c \
ft_calloc.c \
ft_memchr.c \
ft_memcmp.c \
ft_substr.c \
ft_split.c \
ft_strtrim.c \
ft_itoa.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putendl_fd.c \
ft_memmove.c

BONUSSRCS	= ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c

BONUSOBJS	= ${BONUSSRCS:.c=.o}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
CFLAGS	=  -Wall -Wextra -Werror

RM = rm -f
${NAME}	:	${OBJS}
	ar -crs ${NAME} ${OBJS}

bonus	:	${BONUSOBJS}
	ar -crs ${NAME} ${BONUSOBJS}

all :	${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

%.o: %.c
	${CC} -c -o $@ $< ${CFLAGS}

re : fclean all

f : all clean

.PHONY: clean fclean re all f
