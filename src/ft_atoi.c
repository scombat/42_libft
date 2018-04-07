/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:56:48 by scombat           #+#    #+#             */
/*   Updated: 2017/04/22 01:38:34 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isneg(char c)
{
	if ('-' == c)
		return (-1);
	return (1);
}

int		ft_atoi(const char *str)
{
	char	*tmp_str;
	int	result;
	int	factor;

	if (!str || str == '\0')
		return (str[0]);
	else if (str[0] == '\200')
		return (0);
	tmp_str = ft_strtrim((char *)(str));
	factor = ft_isneg(tmp_str[0]);
	result = 0;
	if (factor == -1 || '+' == tmp_str[0])
		tmp_str++;
	while (*tmp_str)
	{
		if (*tmp_str >= '0' && *tmp_str <= '9')
			result = (result * 10) + (*tmp_str - 48);
		else if ( result != 0 )
			return (result *= factor);
		else
			return (0);
		tmp_str++;
	}
	return (result *= factor);
}