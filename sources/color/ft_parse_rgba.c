/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_rgba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:24:48 by ctrouve           #+#    #+#             */
/*   Updated: 2022/10/21 15:49:54 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "libft.h"

static void	ft_char_memdel(char **ap)
{
	int	i;

	i = 0;
	while (ap[i])
	{
		free (ap[i]);
		i++;
	}
	free (ap);
}

t_rgba	ft_parse_rgba(char *line)
{
	t_rgba	c;
	char	**res;

	res = ft_strsplit((const char *)line, ' ');
	c.r = ft_strtod(res[1]);
	c.g = ft_strtod(res[2]);
	c.b = ft_strtod(res[3]);
	c.a = 1.0;
	ft_char_memdel(res);
	return (c);
}
