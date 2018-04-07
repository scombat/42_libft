/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 17:01:56 by scombat           #+#    #+#             */
/*   Updated: 2015/12/17 22:49:58 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(const char *str)
{
	char	*tmp_str;
	char	*dst;
	size_t	i;

	if (!str)
		return (NULL);
	tmp_str = (char *)(str);
	dst = ft_strnew(ft_strlen(str));
	if ( !dst )
		return (NULL);
	if ( ft_strlen(str) == 0 )
		return ((char *)(str));
	i = 0;
	while (tmp_str[i] < 33 || tmp_str[i] > 126)
		i++;
	if ( i >= ft_strlen(tmp_str) )
	{
		dst = ft_strnew(0);
		return (dst);
	}
	dst = ft_strdup(tmp_str + i);
	if (dst[ft_strlen(dst) - 1] < 33 || dst[ft_strlen(dst) - 1] > 126)
		dst = ft_strrev(ft_strtrim(ft_strrev(dst)));
	return (dst);
}
