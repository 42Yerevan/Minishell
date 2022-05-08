/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <vmusaely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/3 19:22:43 by vmusaely          #+#    #+#             */
/*   Updated: 2022/05/8 11:06:20 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/**
 * @brief Main function.
 * 
 * @return int 
 */
int	main(int argc, char **argv, char **envp)
{
	shell_init(envp);
	if (argc > 2 && ft_strcmp(argv[1], "-c") == 0)
		return (shell_execute(argv[2]));
	signal_shell();
	return (shell_start());
}
