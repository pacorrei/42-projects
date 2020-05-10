/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:10:19 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/21 14:53:01 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		verif_char(char c, char *charset)
{
	int i;

	i = 0;
	if (c == '\0')
		return (0);
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	k = 0;
	j = 0;
	while (s1[j] && verif_char(s1[j], (char*)set))
		j++;
	while (i > j && verif_char(s1[i], (char*)set))
		i--;
	if (!(str = malloc(sizeof(char) * (i + 2 - j))))
		return (NULL);
	while (j <= i)
		str[k++] = s1[j++];
	str[k] = '\0';
	return (str);
}
