/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:42:02 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/07/03 08:21:49 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_substrbis(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			y;

	y = 0;
	i = start;
	if (!s[y] || !(str = malloc(sizeof(char) * len)))
		return (NULL);
	while (s[i] && y < len - 1)
		str[y++] = s[i++];
	str[y] = '\0';
	return (str);
}

static	int		count_word(char const *s, char c)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			y++;
			i++;
		}
		else
			i++;
	}
	return (y);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	char	*temp;
	int		i;
	int		y;
	int		x;

	x = 0;
	y = count_word(s, c);
	temp = (char *)s;
	if (!(tab = malloc(sizeof(char *) * y + 1)))
		return (NULL);
	while (y)
	{
		i = x;
		while (temp[i] == c && temp[i])
			i++;
		x = i;
		while (temp[x] != c && temp[x])
			x++;
		*tab = ft_substrbis(s, i, x - i + 1);
		tab++;
		y--;
	}
	*tab = NULL;
	return (tab - count_word(s, c));
}
