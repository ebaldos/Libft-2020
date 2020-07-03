/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:45:44 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/29 14:21:53 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		check_set(char c, const char *s)
{
	unsigned int i;
	unsigned int y;

	y = ft_strlen(s);
	i = 0;
	while (i < y)
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}

static	char	*ft_substr_bis(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*str;
	unsigned int		y;

	y = 0;
	i = start;
	if (!s[y] || !(str = malloc(sizeof(char) * len)))
		return (NULL);
	if (len == 1)
	{
		str[y] = '\0';
		return (str);
	}
	while (s[i] && y < len - 1)
		str[y++] = s[i++];
	str[y] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	if (!set[i] || !s1)
		return ((char *)s1);
	if (!s1[i])
		return ((char *)s1);
	while (!check_set(s1[i], set))
		i++;
	y = ft_strlen(s1);
	if (i == y)
		return (ft_substr_bis(s1, i, y - i + 1));
	while (!check_set(s1[y - 1], set))
		y--;
	return (ft_substr_bis(s1, i, y - i + 1));
}
