/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaldos- <ebaldos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:39:25 by ebaldos-          #+#    #+#             */
/*   Updated: 2020/06/24 14:02:39 by ebaldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int n)
{
	long int	y;
	int			size;
	long int	i;

	size = 1;
	i = n;
	if (i < 0)
	{
		i = -i;
		size++;
	}
	y = i;
	while (y >= 10)
	{
		y = y / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	long int	y;
	int			size;
	char		*number;
	long int	i;

	size = ft_size(n);
	i = n;
	if (i < 0)
		i = -i;
	if (!(number = malloc(sizeof(char) * size + 1)))
		return (NULL);
	y = size - 1;
	while (y >= 0)
	{
		while (i >= 10)
		{
			number[y--] = (i % 10) + 48;
			i = i / 10;
		}
		number[y--] = i + 48;
	}
	if (n < 0)
		number[0] = '-';
	number[size] = '\0';
	return (number);
}
