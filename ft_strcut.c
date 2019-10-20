/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:41:12 by qdang             #+#    #+#             */
/*   Updated: 2019/10/19 15:32:24 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (!ft_strchr(str, c) || c == 0)
		return (ft_strdup(str));
	while (str[i] != c)
		i++;
	return (ft_strsub(str, 0, i));
}
