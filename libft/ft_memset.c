/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:53:10 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/12 15:43:55 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*dst;

	i = 0;
	dst = b;
	while (len > 0)
	{
		dst[i] = c;
		i++;
		len--;
	}
	b = dst;
	return ((char*)b);
}
