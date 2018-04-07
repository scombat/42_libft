/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 23:21:23 by scombat           #+#    #+#             */
/*   Updated: 2018/04/07 11:46:58 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"

int     ft_readfile(char *filename)
{
    char    *buffer;
    int     fd;
    size_t  resRead;

    if ((fd = ft_fopen(filename, "r")) <= 0)
        return (FALSE);
    buffer = ft_strnew(2048);
    while ((resRead = read(fd, buffer, 2048)) > 0)
    {
        if (resRead < 2048)
            buffer[resRead] = '\0';
        ft_putstr(buffer);
    }
    return (TRUE);
}
