/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:22:08 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/13 18:31:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	ft_bzero(char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		buff[i] = '\0';
		i++;
	}
}

static void	ft_verify(int br, char *buff)
{
	int	i;

	i = 0;
	if (br <= BUFFER_SIZE)
	{
		while (i < br)
			i++;
		while (buff[i])
		{
			buff[i] = '\0';
			i++;
		}
	}
}

char	*get_next_line(int fd)
{
	static char	buffer[1024][BUFFER_SIZE + 1];
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || !ft_init(&line, &bytes_read, buffer[fd]))
		return (NULL);
	while (bytes_read && !ft_is_nl(buffer[fd]))
	{
		bytes_read = read(fd, buffer[fd], BUFFER_SIZE);
		if (bytes_read == -1 || (bytes_read == 0 && !*line))
		{
			if (bytes_read == -1)
				ft_bzero(buffer[fd]);
			return (free(line), NULL);
		}
		if (bytes_read != 0)
		{
			ft_verify(bytes_read, buffer[fd]);
			line = ft_strjoin(line, buffer[fd]);
			if (!line)
				return (free(line), NULL);
		}
	}
	ft_offset(buffer[fd]);
	return (line);
}
