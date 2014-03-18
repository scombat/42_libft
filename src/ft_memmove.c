/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 19:41:33 by scombat           #+#    #+#             */
/*   Updated: 2014/03/16 19:53:00 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp_src;
	char		*tmp_dst;

	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	tmp_src = src;
	tmp_dst = dst;
	tmp_src += len;
	tmp_dst += len;
	while (len--)
		*--tmp_dst = *--tmp_src;
	return (tmp_dst);
}
