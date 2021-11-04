/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:00 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/04 17:39:40 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;

	while (s[i] != '\0')
	{
		i++;
	}
	pointer = s[i];
	if (*pointer == '\0' && c == '\0')
	{
		return (pointer);
	}
	while (*pointer)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		pointer--;
	}
	return (NULL);
}
