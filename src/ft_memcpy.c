/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 19:32:49 by scombat           #+#    #+#             */
/*   Updated: 2015/12/14 22:22:35 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*tmp_src;
	char		*rslt;

	if (n > 0)
	{
		tmp_src = src;
		rslt = dst;
		while (n--)
			*rslt++ = *tmp_src++;
	}
	return (dst);
}
