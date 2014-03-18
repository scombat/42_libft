/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:14:27 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 16:32:55 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s1;
	size_t	i;
	char	*tmp_dst;

	len_s1 = ft_strlen(dst);
	i = 0;
	tmp_dst = dst;
	while (src[i] && size--)
	{
		tmp_dst[len_s1 - 1] = src[i];
		i++;
		len_s1++;
	}
	tmp_dst[len_s1] = '\0';
	return (ft_strlen(tmp_dst));
}
