/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:23:13 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/25 13:45:03 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				rest;
	size_t			dstlen;
	size_t			srclen;
	unsigned int	i;
	unsigned int	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	rest = (int)dstsize - dstlen - 1;
	if (rest >= 0)
	{
		i = dstlen;
		j = 0;
		while (rest-- && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (srclen + dstlen);
	}
	return (srclen + dstsize);
}
