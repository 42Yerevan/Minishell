#include "minishell.h"

char    *lsh_read_line()
{
	while (1) 
	{
		int 	len;
		char 	*cmd;

		cmd = readline(PROMPT);
		len = ft_strlen(cmd) - 1;
		if (!cmd[len] || cmd[len] == '\n')
			return (cmd);
	}
}

void    ft_shell_loop()
{
	char *cmd;
	// char **args;
	// int status;

	 while (1)
	{
		cmd = lsh_read_line();
		if(cmd && *cmd)
		{
			// add_history(cmd);
			free(cmd);
		}
		// args = lsh_split_line(line);
		// status = lsh_execute(args);

		// free(line);
		// free(args);
	}
	
}

int	    main(void)
{
	// if (argc || argv)
	// 	printf("");
	ft_shell_loop();
	return (0);
}