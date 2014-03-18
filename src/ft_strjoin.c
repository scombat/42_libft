/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 11:16:47 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 11:23:50 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rslt;

	if (!s1 || !s2)
		return (NULL);
	rslt = NULL;
	rslt = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!rslt)
		return (NULL);
	if (ft_strcpy(rslt, s1) == NULL || ft_strcat(rslt, s2) == NULL)
		return (NULL);
	return (rslt);
}
