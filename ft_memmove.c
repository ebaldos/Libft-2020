/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:41:07 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:19:37 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*srcbis;
	unsigned char	*dstbis;

	i = 0;
	srcbis = (unsigned char *)src;
	dstbis = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dstbis > srcbis)
		while (i < len)
		{
			dstbis[len - 1] = srcbis[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			dstbis[i] = srcbis[i];
			i++;
		}
	return (dst);
}
