/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:14:53 by qdang             #+#    #+#             */
/*   Updated: 2019/09/27 17:05:01 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cal(const unsigned char *old, unsigned char *new, size_t len)
{
	size_t	i;

	i = 1;
	if (old <= new)
	{
		while (i <= len)
		{
			new[len - i] = old[len - i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			new[i] = old[i];
			i++;
		}
	}
}

void		*ft_memmove(void *dst, const void *str, size_t len)
{
	unsigned char		*new;
	const unsigned char	*old;

	if (dst == NULL && str == NULL)
		return (NULL);
	old = (const unsigned char *)str;
	new = (unsigned char *)dst;
	ft_cal(old, new, len);
	return (dst);
}
