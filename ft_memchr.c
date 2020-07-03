/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:40:34 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:18:56 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sbis;

	i = 0;
	sbis = (unsigned char *)s;
	while (i < n)
	{
		if (sbis[i] == (unsigned char)c)
			return (&sbis[i]);
		i++;
	}
	return (0);
}
