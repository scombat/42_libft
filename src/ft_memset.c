/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 19:13:24 by scombat           #+#    #+#             */
/*   Updated: 2015/12/14 22:22:09 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		tmp_c;
	char				*str;
	size_t					i;

	i = 0;
	str = b;
	tmp_c = (unsigned char)(c);
	while (i < len)
	{
		str[i] = tmp_c;
		i++;
	}

	return b;
}
