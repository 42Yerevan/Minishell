/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/3 17:56:12 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/05/8 19:53:17 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	builtin_cd(int argc, char **argv)
{
	char	*home;

	if (argc > 1)
		home = argv[1];
	else
		home = getenv("HOME");
	if (chdir(home) != 0)
	{
		error_print_code(NAME, "cd", argv[1]);
		return (1);
	}
	return (0);
}
