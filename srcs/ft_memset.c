/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:59:03 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/07 13:01:35 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	if (s == NULL)
		return (NULL);
	unsigned char	*s_ptr;

	s_ptr = s;
	while (n--)
		*s_ptr++ = (unsigned char) c;
	return (s);
}
