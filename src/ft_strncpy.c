/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 15:34:30 by scombat           #+#    #+#             */
/*   Updated: 2015/12/14 22:59:12 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmp_dst;

	tmp_dst = dst;
	while (n > 0 && *src != '\0') {
		*tmp_dst++ = *src++;
		--n;
	}
	while (n > 0) {
		*tmp_dst++ = '\0';
		--n;
	}
	return (dst);
}
