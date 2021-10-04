#include "minishell.h"

int     ft_is_unknown(char *str)
{
	int i;
	
	i = 0;
	if (!str)
		return (0);
	while (str[i])
		if (str[i] == '\\' || str[i++] == ';')
			return (1);
	return (0);
}

int    ft_check_quotes(char *str)
{
	printf("str: %s\n", str);
	char *first;
	char *last;

	first = ft_strchr(str, '\'');
	printf("%s\n", first);
	// // first = ft_strchr(str, '\'') ? ft_strchr(str, '\'') : ft_strchr(str, '"');
	last = ft_strrchr(str, '\'');
	printf("%s\n", last);
	// // last = ft_strrchr(str, '\'') ? ft_strrchr(str, '\'') : ft_strrchr(str, '"');
	if (first && !last && first == last)
		return (1);
	return (0);
}

int     ft_parsing(char *cmd)
{
	// printf("Check %s\n", cmd);
	if (ft_is_unknown(cmd) || ft_check_quotes(cmd))
		return (ft_print("Error: unknown symbol.", 1));
	// ft_check_quotes(cmd);
	// if (ft_strchr(cmd, '\'') || ft_strchr(cmd, '"'))
		// ;
	// if (ft_strchr(cmd, '\'') && ft_strchr(cmd, '"'))
		// return (ft_print(""))
	return (0);
}