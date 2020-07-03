/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:45:20 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/23 14:45:23 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	y = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			y = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	if (y < 0)
		return (NULL);
	else
		return ((char *)s + y);
}
