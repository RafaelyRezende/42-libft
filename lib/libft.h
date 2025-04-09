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

//--------------------------DEFINES-------------------------------------

#define TRUE 1
#define FALSE 0

int	ft_atoi(char *nptr);

//--------------------------STRING MANIPULATION--------------------------------------------

int		ft_strlen(const char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
int		ft_strcmp(char *s1, char *s2);

int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlcat(char *dst, const char *src, unsigned int size);
char	*ft_strnstr(char *big, char *little, unsigned int len);

//--------------------------CHARACTER VERIFICATION--------------------------------------------

int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalpha(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);

//--------------------------MEMORY MANIPULATION--------------------------------------------

void	*ft_memcpy(void *dest, void *src, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
char	*ft_strnstr(char *big, char *little, unsigned int len);

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n);

void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
void	*ft_calloc(unsigned int nmemb, unsigned int size);

#endif
