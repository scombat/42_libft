/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 11:25:00 by scombat           #+#    #+#             */
/*   Updated: 2018/04/06 16:15:19 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int	count_words(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i += (*s == c) ? 1 : 0;
		s++;
	}
	return (i + 1);
}

static int	is_beginning_word(char const *s, char c, size_t i)
{
	if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		return (1);
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if ((tab = (char **)malloc(sizeof(char *) * count_words(s, c))) == NULL)
		return (NULL);
	if (count_words(s, c) == 0)
		return (tab);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = 0;
		if (is_beginning_word(s, c, i))
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			tab[k++] = ft_strsub(s, i, j);
		}
		i++;
	}
	return (tab);
}
