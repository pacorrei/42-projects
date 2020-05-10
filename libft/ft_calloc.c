/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:30:38 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/15 18:38:17 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char				*tab;
	unsigned int		i;

	i = 0;
	tab = malloc(sizeof(char) * count * size);
	if (tab == NULL)
		return (NULL);
	while (i < count * size)
	{
		tab[i] = '\0';
		i++;
	}
	return ((void*)tab);
}
