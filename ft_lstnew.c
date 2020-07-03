/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:32:04 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/30 08:11:04 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newptr;

	if (!(newptr = malloc(sizeof(t_list))))
		return (NULL);
	newptr->content = content;
	newptr->next = NULL;
	return (newptr);
}
