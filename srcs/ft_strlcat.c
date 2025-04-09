/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:24:36 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/09 14:44:21 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	char	*d;
	const char	*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dst;
	s = src;
	n = size;
	dlen = 0;
	while (n-- && *d)
	{
		dlen++;
		d++;
	}
	n = size - dlen;
	if (n == 0)
		return (ft_strlen(src));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
