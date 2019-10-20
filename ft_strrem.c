/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:53:05 by qdang             #+#    #+#             */
/*   Updated: 2019/10/19 15:32:18 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrem(char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (!ft_strchr(str, c) || !c)
		return (ft_strnew(0));
	while (str[i] != c)
		i++;
	return (ft_strsub(str, i + 1, ft_strlen(str) - i - 1));
}
