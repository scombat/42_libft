/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 15:34:30 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 15:42:52 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*tmp_dst;

	tmp_dst = dst;
	i = 0;
	while (src[i] && i <= n)
	{
		tmp_dst[i] = src[i];
		i++;
	}
	while (i <= n)
		tmp_dst[i++] = '\0';
	return (dst);
}
