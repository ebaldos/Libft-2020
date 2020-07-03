/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:45:57 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:24:54 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			y;

	y = 0;
	i = start;
	if (!s[y] || !(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i] && y < len)
		str[y++] = s[i++];
	str[y] = '\0';
	return (str);
}
