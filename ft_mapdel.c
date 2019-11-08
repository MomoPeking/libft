/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:51:31 by qdang             #+#    #+#             */
/*   Updated: 2019/11/07 21:10:24 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_mapdel(char ***map_a, int length)
{
	int		i;

	i = -1;
	while (++i < length)
	{
		free((*map_a)[i]);
		(*map_a)[i] = NULL;
	}
	free(*map_a);
	*map_a = NULL;
	return (0);
}
