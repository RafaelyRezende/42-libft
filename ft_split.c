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
static char **ft_freeall(char **matrix, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (0);
}

/*
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

*/
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

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**matrix;
	size_t	i;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	i = ft_countwords(ptr, (unsigned char)c);
	matrix = (char **) malloc(sizeof(char *) * (i + 1));
	if (!matrix)
		return (NULL);	
	matrix = ft_something(ptr, matrix, c);
	//ft_full_fill(ptr, c, matrix);
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
		printf("%s", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
*/
