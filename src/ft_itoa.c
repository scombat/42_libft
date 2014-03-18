/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 12:39:19 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 12:54:38 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char		*rslt;
	long long int	tmp;
	int		i;

	rslt = ft_strnew(12);
	rslt = ft_memset(rslt, '\0', 12);
	tmp = (n < 0) ? -n : n;
	i = 0;
	if (tmp == 0)
	{
		rslt[i] = '0';
		return (rslt);
	}
	tmp *= 10;
	while ((tmp /= 10) > 0)
		rslt[i++] = (tmp % 10) + '0';
	if (n < 0)
		rslt[i++] = '-';
	rslt = ft_strrev(rslt);
	rslt[i] = '\0';
	return (rslt);
}
