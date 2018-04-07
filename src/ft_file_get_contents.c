/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_get_contents.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 23:49:57 by scombat           #+#    #+#             */
/*   Updated: 2016/01/01 10:56:29 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"

static char *ft_strcut(char *str, size_t offset)
{
    char    *rslt;

    if (offset >= ft_strlen(str))
        return (NULL);
    rslt = &str[offset];
    return (rslt);
}

static char *ft_strcutend(char *str, size_t len)
{
    return (ft_strncpy(ft_strnew(len), str, len));
}

char        *ft_file_get_contents(char *filename, int offset, int len)
{
    char    *buffer;
    char    *ctn;
    char    *tmpCtn;
    int     fd;
    size_t  resRead;

    if ((fd = ft_fopen(filename, "r")) <= 0)
        return (NULL);
    buffer = ft_strnew(1024);
    ctn = ft_strnew(1024);
    while ((resRead = read(fd, buffer, 1024)) > 0)
    {
        if (resRead < 1024)
            buffer[resRead] = '\0';
        tmpCtn = ft_strnew(ft_strlen(ctn) + resRead);
        tmpCtn = ft_strcpy(tmpCtn, ctn);
        tmpCtn = ft_strcat(tmpCtn, buffer);
        ctn = tmpCtn;
    }
    if (offset != 0 && (int)(ft_strlen(ctn)) > offset)
        ctn = ft_strcut(ctn, offset);
    if (len != 0)
        ctn = ft_strcutend(ctn, len);
    return (ctn);
}