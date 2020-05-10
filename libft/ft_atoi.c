/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:13:46 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/21 14:47:47 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int tmp;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	tmp = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
		nb++;
	}
	if (nb > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		tmp = tmp * 10 + str[i++] - '0';
	return (tmp * sign);
}
