/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:01:57 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/07 13:08:34 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	if (s == NULL)
		return ;
	unsigned char *sptr;

	sptr = (unsigned char *) s;
	while (n--)
		*sptr++ = 0;
}
