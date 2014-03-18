/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:48:28 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 16:54:00 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;
	char	*tmp_s1;

	if (!s2)
		return ((char *)s1);
	while (*str)
	{
		if (ft_memcmp(s1, s2, len) != 0)
			return (str);
		str++;
	}
	return (NULL);
}
