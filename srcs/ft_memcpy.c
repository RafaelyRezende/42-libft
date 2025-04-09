/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:26:59 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/07 13:34:30 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_src = (unsigned char *) src;
	ptr_dest = (unsigned char *) dest;
	while (n--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}
