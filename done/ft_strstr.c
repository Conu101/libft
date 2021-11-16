/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:55:10 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/04 18:17:02 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strstr(const char *haystack, const char *needle)
{
	char	*phaystack;
	int		needle_len;

	phaystack = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return (phaystack);
	}
	while (*phaystack)
	{
		if (*phaystack == *needle)
		{
			if (ft_strcmp(needle, phaystack, needle_len) == 0)
			{
				return (phaystack);
			}
		}
		phaystack++;
	}
	return (NULL);
}
