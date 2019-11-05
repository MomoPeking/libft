/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:53:32 by qdang             #+#    #+#             */
/*   Updated: 2019/11/01 14:58:11 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_mapnew(int width, int length)
{
	char	**map;
	int		i;

	if (width < 1 || length < 1)
		return (NULL);
	i = 0;
	map = (char **)malloc(sizeof(char *) * length);
	while (i < length)
	{
		map[i] = (char *)malloc(sizeof(char) * width);
		i++;
	}
	return (map);
}
