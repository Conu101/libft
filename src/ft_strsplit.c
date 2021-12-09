/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:22:11 by ctrouve           #+#    #+#             */
/*   Updated: 2021/12/09 18:18:21 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strsplit() function allocates with malloc(3) and returns an array of
** fresh strings (all ending with '\0' including the array itself) obtained by
** splitting s using the character c as a delimiter. If the allocation fails,
** the function returns NULL.
*/

#include "libft.h"

static const char	*ft_find_next_str(const char *str, char c, int skip)
{
	if (skip)
		while (*str != '\0' && *str == c)
			str++;
	else
		while (*str != '\0' && *str != c)
			str++;
	return (str);
}

static int	ft_count_splits_str(const char *str, char seps)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str = ft_find_next_str(str, seps, 1);
		if (*str != '\0')
		{
			i++;
			str = ft_find_next_str(str, seps, 0);
		}
	}
	return (i);
}

static void	*ft_tabledel(char **array, int i)
{
	int	x;

	x = 0;
	if (array)
	{
		while (x < i)
		{
			free(array[x]);
			x++;
		}
		free(array);
	}
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**result;
	int			i;
	const char	*next;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_splits_str(s, c) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_find_next_str(s, c, 1);
		if (*s != '\0')
		{
			next = ft_find_next_str(s, c, 0);
			result[i] = ft_strsub(s, 0, next - s);
			if (result[i] == NULL)
				return (ft_tabledel(result, i));
			i++;
			s = next;
		}
	}
	result[i] = 0;
	return (result);
}
