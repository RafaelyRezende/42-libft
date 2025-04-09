/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:15:40 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/08 09:23:46 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	unsigned char	buffer[1024];
	unsigned char	*ptr_buffer;
	unsigned int	i;

	i = n;
	ptr_buffer = buffer;
	ptr_src = (unsigned char *) src;
	ptr_dest= (unsigned char *) dest;
	while (i-- && *ptr_src)
	{
		*ptr_buffer = *ptr_src;
		ptr_src++;
		ptr_buffer++;
	}
	ptr_buffer = buffer;
	while (n-- & *ptr_buffer)
	{
		*ptr_dest = *ptr_buffer;
		ptr_dest++;
		ptr_buffer++;
	}
	return (dest);
}
