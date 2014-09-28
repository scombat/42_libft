/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 11:25:00 by scombat           #+#    #+#             */
/*   Updated: 2014/09/28 19:52:26 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		i += (*s == c) ? 1 : 0;
		while (*s == c)
			s++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int	i;
	int	j;
	int	k;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * count_words(s, c));
	i = 0;
	while (i < (int)(ft_strlen(s)))
		tab[i++] = (char *)malloc(sizeof(char) * ft_strlen(s));
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] != c)
			tab[j][k++] = s[i++];
		if (k != 0)
			tab[j++][k] = '\0';
		i++;
	}
	tab[j] = "\0";
	return (tab);
}
