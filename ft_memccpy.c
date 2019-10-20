/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:26:52 by qdang             #+#    #+#             */
/*   Updated: 2019/09/18 23:41:21 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*new;
	const unsigned char	*old;

	new = (unsigned char *)dst;
	old = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		new[i] = old[i];
		if (old[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
