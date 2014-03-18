/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 15:01:50 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 15:34:11 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	len;
	size_t	i;
	char	*tmp_dst;

	i = 0;
	tmp_dst = dst;
	len = ft_strlen(src);
	while (i <= len)
	{
		tmp_dst[i] = src[i];
		i++;
	}
	return (dst);
}
