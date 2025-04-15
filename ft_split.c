/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:35:46 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/14 16:59:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	flag;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		flag = TRUE;
		while (*s != c && *s)
		{
			if (flag)
			{
				i++;
				flag = FALSE;
			}
			s++;
		}
	}
	return (i);
}

static int	ft_freeall(char **matrix, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (1);
}

static int	ft_fill(char const *s, char **matrix, char c, int k)
{
	int	i;
	int	j;

	j = 0;
	while (j < k)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (*s && *s != c)
		{
			i++;
			s++;
		}
		if (i)
		{
			matrix[j] = ft_substr(s - i, 0, i);
			if (!matrix[j])
				return (ft_freeall(matrix, j));
			j++;
		}
	}
	matrix[j] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**matrix;
	size_t	iter;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	iter = ft_countwords(ptr, (unsigned char)c);
	matrix = (char **) malloc(sizeof(char *) * (iter + 1));
	if (!matrix)
		return (NULL);
	if (ft_fill(s, matrix, (unsigned char)c, (int)iter))
		return (NULL);
	return (matrix);
}
/*
int	main()
{
	char	**strs;
	char	s[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
	strs = ft_split(s, '^');
	printf("%zu\n", ft_countwords(s, '^'));
	int i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
static void	ft_full_fill(char const *s, char c, char **matrix)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		if(i)
		{
			matrix[j] = ft_substr(s - i, 0, i);
			if (!matrix[j])
			{
				ft_freeall(matrix, j);
				return ;
			}
		j++;
		}
		while (*s == c && *s)
			s++;
	}
	matrix[j] = NULL;
}
static char **ft_something(char const *s, char **matrix, char c)
{
	int	i;
	int	j;
	int k;

	k = (int) ft_countwords(s,c);
	j = 0;
	while (j < k) 
	{
		i = 0;
		while (*s == c && *s)
			s++;
		if (*s)
		{
			while (*s != c && *s)
			{
				i++;
				s++;
			}
			if(i)
			{
				matrix[j] = ft_substr(s - i, 0, i);
				if (!matrix[j])
					return (ft_freeall(matrix, j));
				j++;
			}
		}
	}
	matrix[j] = 0;
	return (matrix);
}
*/
