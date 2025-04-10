/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:35:55 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/09 22:29:04 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (*s == (char) c)
			return (s);
		s++;
	}
	return (NULL);
}
