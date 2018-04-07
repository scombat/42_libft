/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 14:43:59 by scombat           #+#    #+#             */
/*   Updated: 2018/04/06 14:22:20 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ( *s1 == *s2  && n--)
	{
		if ( *s1 == '\0' )
		{
			return (0);
		}
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
}
