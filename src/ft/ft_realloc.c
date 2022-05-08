/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <vmusaely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/3 19:29:45 by vmusaely          #+#    #+#             */
/*   Updated: 2022/02/19 19:29:53 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (!ptr)
		return (malloc(size + 1));
	if (!size)
		return (ptr);
	new_ptr = malloc(size + 1);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
