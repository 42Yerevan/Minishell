#include "minishell.h"

int ft_print(char *str, int status)
{
    printf("%s\n", str);
    return (status);
}

void ft_free(char *str)
{
    if (str)
        free(str);
}