/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:54:43 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/08/11 12:27:12 by rluis-ya         ###   ########.fr       */
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
	long		sign;
	long long	res;

	sign = 1;
	res = 0;
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
	if (res < -2147483648 || res > 2147483648) 
		return (0);
	return ((long)(sign * res));
}
