/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:16:30 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/11 18:16:30 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** The ft_strjoin() function allocates (with malloc(3)) and returns a "fresh"
** string that is the concatenation of s1 and s2, ending with '\0'. If the
** allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_together;
	int		i;

	if (s1 && s2)
	{
		str_together = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str_together)
		{
			i = 0;
			while (*s1)
			{
				str_together[i++] = *s1;
				s1++;
			}
			while (*s2)
			{
				str_together[i++] = *s2;
				s2++;
			}
			str_together[i] = '\0';
			return (str_together);
		}
	}
	return (NULL);
}
