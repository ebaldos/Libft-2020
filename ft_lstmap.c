/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 13:36:38 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:26:24 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	tmp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (!tmp)
		{
			if (!(new = malloc(sizeof(t_list))))
				return (NULL);
			tmp = new;
		}
		new->content = f(lst->content);
		if (!(new->next = malloc(sizeof(t_list))))
			return (NULL);
		lst = lst->next;
		if (!lst)
			free(new->next);
		else
			new = new->next;
	}
	new->next = NULL;
	return (tmp);
}
