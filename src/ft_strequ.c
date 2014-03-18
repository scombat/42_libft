/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 10:55:32 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 10:58:05 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*tmp_s1;
	char	*tmp_s2;

	tmp_s1 = (char *)(s1);
	tmp_s2 = (char *)(s2);
	while (*tmp_s1 && *tmp_s2)
	{
		if (*tmp_s1 != *tmp_s2)
			return (0);
		tmp_s1++;
		tmp_s2++;
	}
	return (1);
}
