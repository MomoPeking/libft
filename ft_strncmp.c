/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 09:12:10 by qdang             #+#    #+#             */
/*   Updated: 2019/09/24 21:34:36 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n <= ft_strlen(s1) && n <= ft_strlen(s2))
	{
		while (i < n - 1 && s1[i] == s2[i])
			i++;
		return (s1[i] - s2[i]);
	}
	else if (n > ft_strlen(s1) && n <= ft_strlen(s2))
		return (-1);
	else if (n <= ft_strlen(s1) && n > ft_strlen(s2))
		return (1);
	else
		return (ft_strcmp(s1, s2));
}
