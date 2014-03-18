/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 17:05:02 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 18:23:40 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrev(const char *s)
{
	char	*rslt;
	char	*tmp_s;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	rslt = ft_strnew(len);
	tmp_s = (char *)(s);
	i = 0;
	while (len > 0)
	{
		rslt[i] = tmp_s[len - 1];
		i++;
		len--;
	}
	rslt[i + 1] = '\0';
	return (rslt);
}
