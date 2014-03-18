/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 11:01:31 by scombat           #+#    #+#             */
/*   Updated: 2014/03/18 11:16:39 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*rslt;
	char	*tmp_s;
	int	i;

	if (!s || ((int)(ft_strlen(s) - (start + len)) < 0) || len == 0)
		return (NULL);
	rslt = NULL;
	rslt = ft_strnew(ft_strlen(s) + 1);
	if (!rslt)
		return (NULL);
	tmp_s = (char *)(s);
	tmp_s += start;
	i = 0;
	while (*tmp_s && len)
	{
		rslt[i] = *tmp_s;
		i++;
		tmp_s++;
		len--;
	}
	return (rslt);
}
