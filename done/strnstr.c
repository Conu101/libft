/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:33:16 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/10 13:33:16 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr - Find the first substring in a length-limited string
** @big: The string to be searched
** @little: The string to search for
** @len: the maximum number of characters to search
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	if (!*big && !*little)
		return ("");
	while (*big)
	{
		if (ft_strlen(little) > l)
			break ;
		if (ft_strlen(big) < ft_strlen(little))
			break ;
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char*)big);
	}
	return (NULL);
}
