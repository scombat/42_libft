/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 22:27:50 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 15:01:31 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	char	*str;
	int	i;

	tmp = (char *)(s);
	if (!tmp)
		return (NULL);
	str = ft_strnew(ft_strlen(tmp));
	i = 0;
	while (*tmp)
		str[i++] = *tmp++;
	return (str);
}
