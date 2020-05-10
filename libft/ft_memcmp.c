/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:15:25 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/14 17:53:04 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				j;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	j = 0;
	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	while (((int)n) > i)
	{
		if (!(cs1[i] == cs2[i]))
		{
			j = cs1[i] - cs2[i];
			return (j);
		}
		i++;
	}
	return (0);
}
