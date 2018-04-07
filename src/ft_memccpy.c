/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 14:33:00 by scombat           #+#    #+#             */
/*   Updated: 2015/12/14 22:23:22 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	unsigned char	tmp_c;

	tmp_s1 = (unsigned char *)(s1);
	tmp_s2 = (unsigned char *)(s2);
	tmp_c = (unsigned char)(c);
	while (n--)
	{
		if ((*tmp_s1++ = *tmp_s2++) == tmp_c)
			return (tmp_s1);
	}
	return (NULL);
}
