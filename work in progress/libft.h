/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:55:45 by ctrouve           #+#    #+#             */
/*   Updated: 2021/11/04 17:51:45 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <xlocale.h>
#include <stdbool.h>

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
char	*strcat(char *restrict s1, const char *restrict s2);
char	*strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int		toupper(int c);
int		tolower(int c);
char	*ft_strnstr(const char *big, const char *little, size_t l);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

#endif
