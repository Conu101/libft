/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:33:16 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/16 16:39:55 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strnstr - Find the first substring in a length-limited string
** @haystack: The string to be searched in
** @needle: The string to search for
** @len: the maximum number of characters to search
*/

#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len_needle;

	str = (char *)haystack;
	if ((len_needle = ft_strlen(needle)) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) < len_needle || len < len_needle)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && i <= len - len_needle)
	{
		j = 0;
		while (needle[j] && needle[j] == str[j + i])
			j++;
		if (j == len_needle)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
