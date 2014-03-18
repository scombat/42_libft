/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 19:13:24 by scombat           #+#    #+#             */
/*   Updated: 2014/03/16 19:23:49 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		tmp_c;
	char			*str;

	if (len && b)
	{
		str = b;
		tmp_c = (unsigned char)(c);
		while (len--)
			*str++ = tmp_c;
	}
	return (b);
}
