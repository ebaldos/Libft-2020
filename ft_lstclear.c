/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 10:42:33 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/30 12:31:07 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		to_del = *lst;
		*lst = to_del->next;
		free(to_del);
	}
	*lst = NULL;
}
