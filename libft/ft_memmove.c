/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:44:56 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/14 18:01:03 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*csrc;
	char	*cdst;

	i = 0;
	csrc = (char*)src;
	cdst = (char*)dst;
	if (csrc == NULL && cdst == NULL)
		return (NULL);
	if (csrc > cdst)
	{
		while (((int)len) > i)
		{
			cdst[i] = csrc[i];
			i++;
		}
		return (dst = cdst);
	}
	i = len - 1;
	while (i >= 0)
	{
		cdst[i] = csrc[i];
		i--;
	}
	return (dst = cdst);
}
