/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoihex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:29:51 by qdang             #+#    #+#             */
/*   Updated: 2019/12/29 19:54:09 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate(const char *str, int i)
{
	int		ans;

	ans = 0;
	while (str[i])
	{
		ans *= 16;
		if (str[i] >= 'A' && str[i] <= 'F')
			ans += str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'f')
			ans += str[i] - 'a' + 10;
		else if (str[i] >= '0' && str[i] <= '9')
			ans += str[i] - '0';
		else
			return (0);
		i++;
	}
	return (ans);
}

int			ft_atoihex(const char *str)
{
	if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
		return (calculate(str, 2));
	else if (str[0] == '-' && str[1] == '0' && (str[2] == 'x' || str[2] == 'X'))
		return (calculate(str, 3) * -1);
	else
		return (0);
}
