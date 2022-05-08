/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <vmusaely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/3 19:30:33 by vmusaely          #+#    #+#             */
/*   Updated: 2022/03/03 16:40:23 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	if (s)
	{
		ft_memcpy(ptr, s, len);
		ptr[len - 1] = '\0';
	}
	else
		*ptr = '\0';
	return (ptr);
}
