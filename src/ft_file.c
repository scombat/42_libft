/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 11:08:23 by scombat           #+#    #+#             */
/*   Updated: 2016/01/01 11:22:31 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"
# include <stdio.h>
# include <stdlib.h>

char    **ft_file(char *filename)
{
    char    *file;

    file = ft_file_get_contents(filename, false, false);
    return (ft_strsplit(file, '\n'));
}