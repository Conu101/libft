/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_vec3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:38:49 by ctrouve           #+#    #+#             */
/*   Updated: 2022/10/20 15:49:19 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "libft.h"

/*t_vec3	ft_parse_vec3(char *str)
{
	t_vec3	v;
	char	*token;

	str = ft_strstr(str, " ");
	token = ft_strtok(str, ' ');
	v.x = ft_strtod(token);
	token = ft_strtok(NULL, ' ');
	v.y = ft_strtod(token);
	token = ft_strtok(NULL, ' ');
	v.z = ft_strtod(token);
	return (v);
}
*/
t_vec3	ft_parse_vec3(char *str)
{
	t_vec3	v;
	char	**res;

	res = ft_strsplit(str, ' ');
	if(res[0] != NULL && res[1] != NULL && res[2] != NULL)
	{
		v.x = ft_strtod(res[0]);
		v.y = ft_strtod(res[1]);
		v.z = ft_strtod(res[2]);
	}
	else
		v = ft_make_vec3(0, 0, 0);
	return (v);
}
