/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <vmusaely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:09:48 by vmusaely          #+#    #+#             */
/*   Updated: 2022/03/09 20:52:01 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*parser_get_identifer(t_parser *self)
{
	t_node	*identifer;
	char	*string;

	identifer = parser_word(self);
	if (!identifer)
		return (NULL);
	string = expander_word(identifer, true);
	node_destroy(identifer);
	return (string);
}
