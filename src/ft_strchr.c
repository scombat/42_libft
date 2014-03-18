/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:33:53 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 16:37:15 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp_c;
	size_t	i;

	tmp_c = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp_c)
			return ((char *)(s) + i);
		i++;
	}
	return (NULL);
}
