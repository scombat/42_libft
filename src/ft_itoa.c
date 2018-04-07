/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 12:39:19 by scombat           #+#    #+#             */
/*   Updated: 2015/12/17 23:45:11 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	i;
	int	sign;
	char	*s;

	i = 0;
	sign = n;
	s = ft_strnew(12);
	if (!s)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (sign < 0)
		n = -n;
	while (i == 0 || (n /= 10) > 0)
	{
		s[i++] = n % 10 + '0';
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	s = ft_strrev(s);
	return (s);
}
