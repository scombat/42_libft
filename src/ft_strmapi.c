/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 22:20:44 by scombat           #+#    #+#             */
/*   Updated: 2015/12/18 00:02:13 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp_s;
	char	*str;
	int	i;

	str = NULL;
	if (s && f)
	{	
		i = 0;
		str = ft_strnew(ft_strlen(s));
		if (!str)
			return (NULL);
		tmp_s = (char *)(s);
		while (tmp_s[i]) {
			str[i] = (*f)(i, tmp_s[i]);
			i++;
		}
	}
	return (str);
}
