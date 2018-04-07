/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 20:07:39 by scombat           #+#    #+#             */
/*   Updated: 2015/12/14 22:37:27 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char	u1;
    unsigned char	u2;

    while ( n-- )
    {
    	u1 = * (unsigned char *) s1;
    	u2 = * (unsigned char *) s2;
    	if ( u1 != u2 )
    		return (u1 - u2);
    	s1++;
    	s2++;
    }
    return (0);
}
