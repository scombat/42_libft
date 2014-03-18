/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 18:43:21 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 18:54:39 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

bool	ft_isop(char c)
{
	char	*operators;
	bool	flag;

	flag = false;
	operators = D_OPE;
	while (*operators && flag == false)
		flag = (*(operators++) == c) ? true: false;
	return (flag);
}
