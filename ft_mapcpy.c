/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:31:16 by qdang             #+#    #+#             */
/*   Updated: 2019/10/30 17:37:46 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mapcpy(char **old, int width, int length)
{
	char	**new;
	int		i;
	int		j;

	new = ft_mapnew(width, length);
	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < width)
		{
			new[i][j] = old[i][j];
			j++;
		}
		i++;
	}
	return (new);
}
