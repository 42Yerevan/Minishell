#include "minishell.h"

// int	ft_check_pwd(char *str)
// {
// 	if(ft_strncmp(str, "pwd", ft_strlen(str)))
// 		return 0;
// 	return 1;
// }

// int		ft_check_cmds()
// {
// 	if(ft_check_pwd)

// }

// char	*ft_exec_pwd(char *str)
// {
// 	char dir[10000];
// 	return getcwd(dir, 10000);
// }

char *str_first_cmd(char *str)
{
	char *firts_cmd;
	int i;

	i = 0;

	while()
}

void    ft_shell_loop()
{
	t_shell our_sh;
	our_sh.cmd = "";
	// char *outp;
	// char **args;
	// int status;

	while (1)
	{
		our_sh.cmd = readline(PROMPT);
		// if(ft_check_pwd(cmd))
		// {
		// 	outp = ft_exec_pwd(cmd);
		// 	printf("%s\n", outp);
		// }
		add_history(our_sh.cmd);
		ft_parsing(our_sh.cmd);
		free(our_sh.cmd);
	}
	
}

int	    main(void)
{
	ft_shell_loop();
	return (0);
}