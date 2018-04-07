/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:37:25 by scombat           #+#    #+#             */
/*   Updated: 2018/04/06 15:16:05 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp_c;
	int		len;

	len = ft_strlen(s);
	tmp_c = (char)(c);
	while (len >= 0)
	{
		if (s[len] == tmp_c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
