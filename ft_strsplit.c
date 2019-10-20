/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:11:05 by qdang             #+#    #+#             */
/*   Updated: 2019/10/18 23:33:41 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	amber_size(char const *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			size++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (size);
}

static char	**amber_malloc(char const *s, char c)
{
	char	**amber;
	size_t	count;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	amber = (char **)malloc(sizeof(char *) * amber_size(s, c) + 1);
	if (!amber)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		count = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			count++;
		}
		if (count != 0)
			amber[j] = ft_strnew(count);
		j++;
	}
	return (amber);
}

static char	**split_now(char const *s, char c, char **amber)
{
	size_t	i;
	size_t	a;
	size_t	b;
	size_t	idx;

	i = 0;
	a = 0;
	while (s[i])
	{
		idx = 0;
		b = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			amber[a][b] = s[i];
			b++;
			i++;
			idx = 1;
		}
		if (idx == 1)
			a++;
	}
	amber[a] = NULL;
	return (amber);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**amber;

	if (s == NULL)
		return (NULL);
	amber = amber_malloc(s, c);
	if (!amber)
		return (NULL);
	return (split_now(s, c, amber));
}
