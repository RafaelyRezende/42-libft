/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:38:25 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/08 09:40:49 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*e_ptr;
	int	length;

	length = ft_strlen(s);
	e_ptr = &s[length];
	while (length-- > -1)
	{
		if (*e_ptr == c)
			return (e_ptr);
		e_ptr--;
	}
	return (NULL);
}
