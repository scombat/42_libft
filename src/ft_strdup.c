/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 22:27:50 by scombat           #+#    #+#             */
/*   Updated: 2015/12/16 00:14:37 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	char	*str;

	tmp = (char *)(s);
	str = ft_strnew(ft_strlen(tmp));
	if (!str)
		return (NULL);
	str = ft_strcpy(str, s);
	return (str);
}
