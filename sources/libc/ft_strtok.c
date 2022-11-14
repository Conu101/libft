/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:16:39 by ctrouve           #+#    #+#             */
/*   Updated: 2022/10/21 15:05:31 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, const char *sep, char **lasts)
{
	char	*w;

	if (!str)
		str = *lasts;
	while (*str && ft_strchr(sep, *str))
		++str;
	if (*str == '\0')
		return (NULL);
	w = str;
	while (*str && !ft_strchr(sep, *str))
		++str;
	if (*str)
		*str++ = '\0';
	*lasts = str;
	return (w);
}

char	*ft_strtok(char *str, const char *sep)
{
	static char	*ptr;

	return (ft_strtok_r(str, sep, &ptr));
}
