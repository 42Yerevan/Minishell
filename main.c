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

// char *str_first_cmd(char *str)
// {
// 	char *firts_cmd;
// 	int i;

// 	i = 0;

// 	while()
// }


void    ft_shell_loop()
{
	// t_shell our_sh;
	// our_sh.cmd = "";
	// char *outp;
	// char **args;
	// int status;
	char *cmd;

	while (1)
	{
		// signal(SIGQUIT, SIG_IGN);
		// signal(SIGTSTP, SIG_IGN);
		cmd = readline(PROMPT);
		if (!cmd)
			exit(1);
		// if(ft_check_pwd(cmd))
		// {
		// 	outp = ft_exec_pwd(cmd);
		// 	printf("%s\n", outp);
		// }
		add_history(cmd);
		ft_parsing(cmd);
		// free(cmd);
	}
	
}


void 	ft_control_c(int signum)
{
	if (signum == SIGINT)
    {
		struct termios	new_attr;

		if (tcgetattr(0, &new_attr))
			perror("minishell: tcsetattr");
		new_attr.c_lflag &= ~ECHOCTL;
		if (tcsetattr(0, 0, &new_attr))
			perror("minishell: tcsetattr");
        printf("\n");
        rl_on_new_line();
        rl_replace_line("", 0);
        rl_redisplay();
    }
}

int	    main(void)
{
	signal(SIGINT, ft_control_c);
	signal(SIGQUIT, SIG_IGN);

	ft_shell_loop();
	return (0);
}