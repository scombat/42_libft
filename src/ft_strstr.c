/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:48:28 by scombat           #+#    #+#             */
/*   Updated: 2015/12/15 00:15:21 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp_s1;

	tmp_s1 = (char *)(s1);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return ((char *)s1);
	while (*tmp_s1)
	{
		if (ft_memcmp(tmp_s1, s2, ft_strlen(s2)) == 0)
			return (tmp_s1);
		tmp_s1++;
	}
	return (NULL);
}
