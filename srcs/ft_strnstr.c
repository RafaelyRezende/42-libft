/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:18:56 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/09 14:20:44 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

char	*ft_strnstr(char *big, char *little, unsigned int len)
{
	while (len && *big)
	{
		if (!ft_strncmp(big, little, len))
			return (big);
		big++;
		len--;
	}
	return (NULL);
}
