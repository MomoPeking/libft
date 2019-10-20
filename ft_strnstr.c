/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:35:54 by qdang             #+#    #+#             */
/*   Updated: 2019/09/25 13:06:34 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i]
			&& ft_strncmp(haystack + i, needle, ft_strlen(needle)) != 0)
		i++;
	if (haystack[i] == 0 || i + ft_strlen(needle) > len)
		return (NULL);
	return ((char *)&haystack[i]);
}
