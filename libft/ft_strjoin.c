/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:44:37 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/21 12:39:28 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	int		j;
	char	*str;

	i = 0;
	i2 = 0;
	j = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[i2])
		i2++;
	if (!(str = malloc(sizeof(char) * (i + i2 + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
