/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 08:41:20 by qdang             #+#    #+#             */
/*   Updated: 2019/09/25 12:34:58 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i]
			&& ft_strncmp(haystack + i, needle, ft_strlen(needle)) != 0)
		i++;
	if (haystack[i] == 0)
		return (NULL);
	return ((char *)&haystack[i]);
}
