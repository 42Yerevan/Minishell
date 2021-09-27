#include "minishell.h"

int     ft_is_unknown(char *str)
{
    int i;
    // int j;
    // int quoteStart;
    // int quoteEnd;
    // int dblQStart;
    // int dblQEnd;
    // int quote;
    // int doublequote;
    
    i = 0;
    // quote = 0;
    // doublequote = 0;
    while (str[i])
    {
        if (str[i] == '\\' || str[i++] == ';')
            return (1);
        // if (str[i] == '\'')
        //     quote++;
        // if (str[i] == '"')
        //     doublequote++;
    }

    return (0);
}

void    ft_check_quotes(char *str)
{
    
}

int     ft_parsing(char *cmd)
{
    if (ft_is_unknown(cmd))
        return (ft_print("Error: unknown symbol.", 1));
    if (ft_strchr(cmd, '\'') || ft_strchr(cmd, '"'))
        ft_check_quotes(cmd);
    // if (ft_strchr(cmd, '\'') && ft_strchr(cmd, '"'))
        // return (ft_print(""))
    return (0);
}