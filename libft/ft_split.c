/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:49:56 by pacorrei          #+#    #+#             */
/*   Updated: 2019/11/21 14:49:59 by pacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_verif_sep(char t, char c)
{
	if (t == c)
		return (1);
	if (t == '\0')
		return (1);
	return (0);
}

int		ft_count2(char *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (ft_verif_sep(s[i + 1], c) == 1 &&
				ft_verif_sep(s[i], c) == 0)
			n++;
		i++;
	}
	return (n);
}

void	ft_print(char *dest, char *s, char c)
{
	int i;

	i = 0;
	while (ft_verif_sep(s[i], c) == 0)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_print_tab(char *s, char c, char **tab)
{
	int i;
	int j;
	int a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (ft_verif_sep(s[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_verif_sep(s[i + j], c) == 0)
				j++;
			if (!(tab[a] = (char*)malloc(sizeof(char) * j + 1)))
				return ;
			ft_print(tab[a], s + i, c);
			i += j;
			a++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**tab;

	if (!s)
		return (NULL);
	n = ft_count2((char*)s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	tab[n] = 0;
	ft_print_tab((char*)s, c, tab);
	return (tab);
}
