/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:30:26 by ctrouve           #+#    #+#             */
/*   Updated: 2021/12/10 14:48:09 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strtok() function is used to isolate sequential tokens in a null-
** terminated string, str. These tokens are separated in the string by at least
** one of the characters in sep. The first time that strtok() is called, str 
** should be specified; subsequent calls, wishing to
** obtain further tokens from the same string, should pass a null pointer 
** instead.  The separator string, sep, must be supplied each time, and
** may change between calls.
*/

#include "libft.h"

char	*strtok(char *restrict str, const char *restrict sep)
{
	if (!str)
		return (NULL);
	while (*str && ft_strchr(sep, *str))
		str++;
	while (str && !ft_strchr(sep, *str))
		str++;
	if (!*str)
		return (NULL);
	return (str);
}
