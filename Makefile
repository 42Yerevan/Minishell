NAME = minishell
LIBFT = ./libft/libft.a
SRCS = $(shell find "." -name '*.c')
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar csr
LDFLAGS = -L /Users/vmusaely/brew/opt/readline/lib
CPPFLAGS = -I /Users/vmusaely/brew/opt/readline/include

.c.o :
		@-${CC} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS} 
		@$(MAKE) -C ./libft
		@${CC} ${SRCS} -o ${NAME} -lreadline ${LDFLAGS} ${CPPFLAGS}

all : ${NAME}
		# @$(MAKE) -C ./libft
		# @${CC} ${SRCS} -o ${NAME} -lreadline ${LDFLAGS} ${CPPFLAGS}

clean : 
		@$(MAKE) clean -C ./libft
		@${RM} ${OBJS}

fclean : clean
		@$(MAKE) fclean -C ./libft
		@${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o