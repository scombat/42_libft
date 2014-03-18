/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 10:58:11 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 11:01:06 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*tmp_s1;
	char	*tmp_s2;
	size_t	i;

	tmp_s1 = (char *)(s1);
	tmp_s2 = (char *)(s2);
	i = 0;
	while (*tmp_s1 && *tmp_s2 && i <= n)
	{
		if (*tmp_s1 != *tmp_s2)
			return (0);
		tmp_s1++;
		tmp_s2++;
		i++;
	}
	return (1);
}
