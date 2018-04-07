/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fopen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 22:52:03 by scombat           #+#    #+#             */
/*   Updated: 2015/12/31 23:19:46 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"

int     ft_fopen(char *filename, char *mode)
{
    int     access;

    if (!filename || !ft_file_exists(filename))
        return (FALSE);
    if (!mode || (ft_strcmp(mode, "r") == 0))
        access = O_RDONLY;
    else if (ft_strcmp(mode, "w") == 0)
        access = O_WRONLY;
    else if (ft_strcmp(mode, "w+") == 0)
        access = O_RDWR;
    else if (ft_strcmp(mode, "a") == 0)
        access = O_RDWR|O_APPEND;
    else
        access = O_RDONLY;
    return (open(filename, access));
}