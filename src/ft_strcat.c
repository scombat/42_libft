/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 15:43:31 by scombat           #+#    #+#             */
/*   Updated: 2014/03/17 15:59:31 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*tmp_s1;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tmp_s1 = s1;
	i = 0;
	while ((i + len_s1) <= (len_s1 + len_s2))
	{
		tmp_s1[i + len_s1] = s2[i];
		i++;
	}
	tmp_s1[i + len_s1] = '\0';
	return (s1);
}
