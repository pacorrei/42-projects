/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:20:07 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/21 12:31:47 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!dst)
		return (0);
	while (dstsize - 1 > i && src[j] && dstsize != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize == 0)
	{
		while (dst[i])
			i++;
	}
	dst[i] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (j);
}
