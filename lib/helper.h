/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:24:31 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/09 13:36:28 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

#include <stdio.h>
#include <stdlib.h>

//extern char	**str_matrix;

void	test_strings(char **arr, char *expected);
//void	test_memory(void);
//void	test_is(void);
void	test_is(int *i_arr, int(*f)(int));

#endif
