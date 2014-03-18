/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:56:48 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 10:30:56 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isneg(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int		ft_atoi(const char *str)
{
	char	*tmp_str;
	int	result;
	int	factor;
	bool	valide;

	if (!str)
		return (0);
	tmp_str = (char *)(str);
	tmp_str = ft_strtrim(tmp_str);
	result = 0;
	factor = ft_isneg(tmp_str[0]);
	valide = true;
	if (factor == -1)
		tmp_str++;
	while (*tmp_str)
	{
		if (*tmp_str >= '0' && *tmp_str <= '9')
			result = (result * 10) + (*tmp_str - 48);
		else
			return (0);
		tmp_str++;
	}
	result *= factor;
	return (0);
}
