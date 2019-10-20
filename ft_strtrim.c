/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:47:11 by qdang             #+#    #+#             */
/*   Updated: 2019/09/27 14:39:25 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cal(char *str, char const *s)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
	{
		str[0] = '\0';
		return (str);
	}
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	size = j - i + 1;
	j = 0;
	while (j < size)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	size;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[0] == '\0' || !s[i])
		size = 0;
	else
	{
		j = ft_strlen(s) - 1;
		while (j > 0 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
			j--;
		size = j - i + 1;
	}
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	str = ft_cal(str, s);
	return (str);
}
