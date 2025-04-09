/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:41:52 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/09 16:48:25 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <stdio.h>
int main()
{
	char	dest[] = "Hello World";
	const char src[] = "this";
	int	i = ft_strlen(dest);

	printf("%d\n", ft_strlcat(dest, src, i));
}
