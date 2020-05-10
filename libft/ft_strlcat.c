/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:30:20 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/15 16:13:04 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		verif(char c)
{
	if (c == '\0')
		return (1);
	return (0);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t i2;
	size_t i3;

	i = 0;
	i2 = ft_strlen(dst);
	i3 = verif(dst[0]);
	while (src[i] && i2 + i < dstsize - 1 && dstsize != 0)
	{
		dst[i2 + i] = src[i];
		i++;
	}
	dst[i2 + i] = '\0';
	while (src[i])
		i++;
	if (i3 == 1)
		return (i);
	if (dstsize == 0)
		return (i);
	if (dstsize < i2)
		i += dstsize;
	else
		return (i2 + i);
	return (i);
}
