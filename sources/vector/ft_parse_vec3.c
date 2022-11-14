/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_vec3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:38:49 by ctrouve           #+#    #+#             */
/*   Updated: 2022/10/21 16:27:02 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
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

t_vec3	ft_parse_vec3(char *str)
{
	t_vec3	v;
	char	**res;

	res = ft_strsplit((const char *)str, ' ');
	v.x = ft_strtod(res[1]);
	v.y = ft_strtod(res[2]);
	v.z = ft_strtod(res[3]);
	ft_char_memdel(res);
	return (v);
}
