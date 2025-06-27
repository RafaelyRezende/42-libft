/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:27:44 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/13 18:21:22 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_is_nl(char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (++i);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	return (i);
}

int	ft_init(char **line, int *bytes_read, char *buff)
{
	*line = malloc(1);
	if (!*line)
		return (0);
	**line = '\0';
	if (*buff != '\0')
		*line = ft_strjoin(*line, buff);
	if (*line == NULL)
		return (free(*line), 0);
	*bytes_read = 1;
	return (1);
}

void	ft_offset(char *buff)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	j = 0;
	while (buff[i])
	{
		if (buff[i] == '\n' && !flag)
		{
			i++;
			flag++;
		}
		if (flag)
		{
			buff[j] = buff[i];
			j++;
		}
		i++;
	}
	buff[j] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s2) + ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (free(s1), NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] && (j + i) < len)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	free(s1);
	return (ptr);
}
