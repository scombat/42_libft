/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 19:53:15 by scombat           #+#    #+#             */
/*   Updated: 2014/03/16 20:07:24 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp_c;
	char		*tmp_s;

	if (n == 0 || !s)
		return (NULL);
	tmp_c = (unsigned char)(c);
	tmp_s = (char *)(s);
	while (n--)
	{
		if (*tmp_s == tmp_c)
			return (tmp_s);
		tmp_s++;
	}
	return (NULL);
}
