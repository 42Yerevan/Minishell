NAME = minishell
LIBFT = ./libft/libft.a
SRCS = $(shell find "." -name '*.c')
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar csr

.c.o :
		@-${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		@$(MAKE) -C ./libft
		@${CC} ${CFLAGS} -lreadline ${LIBFT} main.c -o ${NAME}
		${RM} ${LIBFT}

all : ${NAME}

clean : 
		@$(MAKE) clean -C ./libft
		@${RM} ${OBJS}

fclean : clean
		@$(MAKE) fclean -C ./libft
		@${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o