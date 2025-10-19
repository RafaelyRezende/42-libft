/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:15:40 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/10/19 18:40:36 by jps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap: copying is performed as if the bytes
 * are first copied into a temporary object that does not overlap src
 * or dest.
 *
 * @param dest Destination memory area.
 * @param src  Source memory area.
 * @param n    Number of bytes to copy.
 * @return     Pointer to dest.
 *
 * Notes:
 * - This implementation matches standard memmove semantics: it treats
 *   n == 0 as a no-op and does not perform NULL checks for src/dest when
 *   n > 0 (undefined behavior if invalid pointers are passed).
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char	*d;
    const unsigned char	*s;

    if (dest == src || n == 0)
	return (dest);
    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    if (d < s)
	return (ft_memcpy(dest, src, n));
    d += n;
    s += n;
    while (n--)
	*--d = *--s;
    return (dest);
}
