/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:11:37 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/04/15 20:39:22 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	void	*tmp;

	if (!f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		res = ft_lstnew(tmp);
		if (!tmp)
		{
			ft_lstdelone(lst, del(&tmp));
			break ;
		}
		res->next = lst->next;
		lst = lst->next;
	}
	return (res);
}
