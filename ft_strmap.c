/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:55:30 by qdang             #+#    #+#             */
/*   Updated: 2019/09/27 17:11:49 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cal(char const *s, char (*f)(char), char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (f(s[i]))
			str[j++] = f(s[i]);
		i++;
	}
	return (str);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i])
	{
		if (f(s[i]))
			size++;
		i++;
	}
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	str = ft_cal(s, f, str);
	return (str);
}
