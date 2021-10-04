#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include<stdlib.h>
#include <signal.h>
#include <termios.h>
#include "./libft/libft.h"

#define PROMPT ">> "

extern char **environ;

typedef struct  s_shell {
    char *cmd;
    char *cmd_args;
    char *options;
}               t_shell;

int		ft_parsing(char *cmd);
int		ft_print(char *str, int status);
void	ft_free(char *str);

#endif