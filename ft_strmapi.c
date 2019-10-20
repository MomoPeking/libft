/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:26:08 by qdang             #+#    #+#             */
/*   Updated: 2019/09/27 17:18:13 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cal(char const *s, char (*f)(unsigned int, char), char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (f(i, s[i]))
			str[j++] = f(i, s[i]);
		i++;
	}
	return (str);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			size;

	i = 0;
	size = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i])
	{
		if (f(i, s[i]))
			size++;
		i++;
	}
	str = ft_strnew(size);
	if (str == NULL)
		return (NULL);
	str = ft_cal(s, f, str);
	return (str);
}
