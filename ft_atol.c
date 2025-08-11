/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:54:43 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/08/11 12:15:36 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if ((ch >= 9 && ch <= 13) || (ch == 32))
		return (TRUE);
	else
		return (FALSE);
}

long	ft_atoi(const char *nptr)
{
	long	sign;
	long	res;

	sign = 1;
	res = 0;
	if (!ft_strcmp("-2147483648", nptr))
		return (-2147483648);
	while (ft_isspace(*nptr))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
		break ;
	}
	while (ft_isdigit(*nptr) && *nptr)
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * res);
}
