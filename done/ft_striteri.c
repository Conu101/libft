/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:03:23 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/11 18:03:23 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** The ft_striteri() function applies the function f to each character of the
** string passed as argument, and passing its index as first argument. Each
** character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}