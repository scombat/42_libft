/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 22:17:29 by scombat           #+#    #+#             */
/*   Updated: 2014/09/28 19:49:49 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = NULL;
	if (s && f)
	{
		str = NULL;
		str = ft_strnew(ft_strlen(s));
		if (!str)
			return (NULL);
		i = 0;
		while (s[i]) {
			str[i] = (*f)(s[i]);
			i++;
		}
	}
	return (str);
}
