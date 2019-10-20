/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:23:28 by qdang             #+#    #+#             */
/*   Updated: 2019/09/27 15:32:00 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_size(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char		*ft_cal(char *str, int n)
{
	size_t	size;
	size_t	i;

	size = nb_size(n);
	i = size - 1;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = ft_strnew(10);
		str = ft_itoa(-214748364);
		str[10] = '8';
	}
	else
	{
		str = ft_strnew(nb_size(n));
		if (!str)
			return (NULL);
		str = ft_cal(str, n);
	}
	return (str);
}
