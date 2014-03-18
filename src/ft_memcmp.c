/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 20:07:39 by scombat           #+#    #+#             */
/*   Updated: 2014/03/16 20:31:22 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*tmp_s1;
	const char	*tmp_s2;
	int		rslt;

	tmp_s1 = s1;
	tmp_s2 = s2;
	rslt = 0;
	while (n-- && rslt == 0)
	{
		if (*tmp_s1 != *tmp_s2)
			rslt += *tmp_s1 - *tmp_s2;
		tmp_s1++;
		tmp_s2++;
	}
	return (rslt);
}
