/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:10:25 by ctrouve           #+#    #+#             */
/*   Updated: 2022/10/21 11:38:14 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ln_w(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

static int	ft_substr(int i, int j, char *str, char **res)
{
	int	k;

	k = 0;
	res[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1);
	if (res[j] == NULL)
		return (0);
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		res[j][k++] = str[i++];
	res[j++][k] = '\0';
	return (1);
}

char	**ft_split_spaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		sub;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (ft_count_splits_str(str + 1, ' ')));
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == ' ') && str[i])
			i++;
		if (str[i])
		{
			sub = ft_substr(i, j, str, res);
			if (sub == 0)
				return (NULL);
		}
	}
	res[j] = NULL;
	return (res);
}
