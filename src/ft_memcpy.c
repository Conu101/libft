/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:20:14 by ctrouve           #+#    #+#             */
/*   Updated: 2021/12/02 18:03:05 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memcpy() function copies n bytes from memory area src to memory area
** dst.  If dst and src overlap, behavior is undefined. Returns the original
** value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int		i;
	unsigned char		*dst;
	unsigned const char	*src;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
