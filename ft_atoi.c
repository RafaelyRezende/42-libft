/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:54:43 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/11 12:24:10 by rluis-ya         ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

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
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	char	**str;

	str = {"-1", "0", "        11234", "      -1239", "-2147483648", NULL};
	while (str[i])
	{
		j = 0;
		while ()
		if (atoi(argv[i][j]) != ft_atoi(argv[i][j]))
			exit(EXIT_FAILURE);
		i++
	}
}
*/
