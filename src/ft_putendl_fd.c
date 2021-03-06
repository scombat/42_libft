/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 13:12:35 by scombat           #+#    #+#             */
/*   Updated: 2015/12/17 22:48:38 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
    if (s)
    {
        write(fd, s, ft_strlen(s));
        write(fd, "\n", 1);
    }
}
