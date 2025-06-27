/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:12:50 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/25 11:03:22 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *args)
{
	int		i;
	int		tmp;
	char	*str;

	i = 0;
	tmp = 0;
	str = args;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		tmp += ft_putchar(str[i]);
		i++;
	}
	return (tmp);
}

int	ft_putunsigned(unsigned int args)
{
	int	tmp;

	tmp = 0;
	if (args > 9)
		tmp += ft_putunsigned(args / 10);
	tmp += ft_putchar(args % 10 + '0');
	return (tmp);
}
