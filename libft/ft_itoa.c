/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:46:17 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/14 15:18:10 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int nb, int n)
{
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		n++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		n++;
	}
	n++;
	return (n);
}

int		ft_putnbr(int nb)
{
	if (nb == -2147483648)
		return ('8');
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	return ((nb % 10) + 48);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*dest;

	i = 0;
	nb = ft_count(n, 0);
	i = nb - 1;
	if (!(dest = malloc(sizeof(char) * nb + 1)))
		return (NULL);
	dest[nb] = '\0';
	if (n < 0)
	{
		dest[0] = '-';
		nb--;
	}
	while (nb > 0)
	{
		dest[i] = ft_putnbr(n);
		n = n / 10;
		i--;
		nb--;
	}
	return (dest);
}
