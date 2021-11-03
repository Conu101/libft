/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:55:45 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/03 19:18:59 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_isalpha(int c);
int		t_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*strdup(char *src);
int		ft_strlen(char *str);
char	*strcpy(char *dst, const char *src);
char	*strncpy(char *dst, const char *src, size_t len);

#endif
