/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:26:59 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/10/19 18:35:54 by jps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap. If they may overlap, use ft_memmove.
 *
 * @param dest Destination memory area.
 * @param src  Source memory area.
 * @param n    Number of bytes to copy.
 * @return     Pointer to dest.
 *
 * Notes:
 * - This function matches the common libc behavior: it assumes src and dest
 *   are valid when n > 0. If n == 0, the function returns dest without
 *   dereferencing src or dest.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (dest == src || n == 0)
		return (dest);
	ptr_src = (unsigned char *) src;
	ptr_dest = (const unsigned char *) dest;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
