/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:39:43 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:18:39 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srcbis;
	unsigned char	*dstbis;

	i = 0;
	srcbis = (unsigned char *)src;
	dstbis = (unsigned char *)dst;
	while (i < n)
	{
		dstbis[i] = srcbis[i];
		if (srcbis[i] == (unsigned char)c)
			return (&dstbis[i + 1]);
		i++;
	}
	return (0);
}
