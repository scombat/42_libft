/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:54:08 by scombat           #+#    #+#             */
/*   Updated: 2014/09/28 19:51:09 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s2);
	str = (char *)(s1);
	if (!s2 || n == 0)
		return ((char *)(s1));
	while (*str && n)
	{
		if (ft_memcmp(s1, s2, len) != 0)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
