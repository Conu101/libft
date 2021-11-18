/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:19:02 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/11 18:19:02 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** The ft_strtrim() function allocates with malloc(3) and returns a copy of
** the string given as argument without whitespaces at the beginning or at
** the end of the string. ' ', '\n' and '\t' are considered whitespace
** characters. If s has no whitespaces at the beginning or the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
*/

#include "libft.h"

static	int	get_start(char const *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	return (i);
}

static	int	get_end(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
	}
	i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*str_trimmed;

	if (s)
	{
		len = (get_end(s) - get_start(s));
		if (len <= 0)
		{
			str_trimmed = ft_strnew(1);
			return (str_trimmed);
		}
		else
		{
			str_trimmed = ft_strnew(len);
		}
		if (str_trimmed)
		{
			str_trimmed = ft_strsub(s, get_start(s), len);
			return (str_trimmed);
		}
	}
	return (NULL);
}
