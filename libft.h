/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:40:33 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/02 18:40:55 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

//--------------------------INCLUDES------------------------------------
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <limits.h>
//--------------------------DEFINES-------------------------------------
#define TRUE 1
#define FALSE 0

int		ft_atoi(const char *nptr);
//--------------------------STRING MANIPULATION--------------------------------------------
size_t	ft_strlen(const char *str);
void	ft_putstr(char *str);
void	ft_putchar(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_strlcat(char *dst, const char *src, unsigned int size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, unsigned int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//--------------------------CHARACTER VERIFICATION--------------------------------------------
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
//--------------------------MEMORY MANIPULATION--------------------------------------------
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
#endif
