/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:37:25 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 16:48:02 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp_c;
	size_t	len;

	len = ft_strlen(s);
	tmp_c = (char)(c);
	while (len)
	{
		if (s[len] == tmp_c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
