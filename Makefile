NAME:=		libft.a

INC_PATH:=	includes
SRC_PATH:=	srcs
OBJ_PATH:=	.objects

LST_INCS:=	libft.h

LST_SRCS:=	ft_isalnum.c \
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
			ft_memmove.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c

LST_OBJS:=	$(LST_SRCS:.c=.o)

INCS:=		$(addprefix $(INC_PATH)/,$(LST_INCS))
SRCS:=		$(addprefix $(SRC_PATH)/,$(LST_SRCS))
OBJS:=		$(addprefix $(OBJ_PATH)/,$(LST_OBJS))

CC:=		gcc
CFLAGS:= 	-Wall -Wextra -Werror -I $(INCS)

RM:=		rm -rf

ERASE:=		\033[2K\r
BOLD:=		\033[1m
redir:=		\033[31m
GREEN:=		\033[32m
BLUE:=		\033[34m
PINK:=		\033[35m
BOLD:=		\033[1m
END	:=		\033[0m

all : $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INCS) Makefile | $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(BLUE)> Compiling :$(END) $<\n"

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME)	:	$(OBJS)
	printf "$(GREEN)> All the libft.c files have been compiled successfully !$(END)\n"
	printf "$(BLUE)> Creating the libft archive file :$(END) $@\n"
	ar -crs $(NAME) $(OBJS)
	printf "$(GREEN)> Libft archive has been compiled successfully !$(END)\n"

clean :
	$(RM) $(OBJ_PATH)
	printf "$(GREEN)> All the .o files have been removed successfully !$(END)\n"

fclean : clean
	$(RM) $(NAME)
	printf "$(GREEN)> $(NAME) has been removed successfully !$(END)\n"

re : fclean all

.PHONY: all clean fclean re

.SILENT: