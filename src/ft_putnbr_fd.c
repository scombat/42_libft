/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 13:13:54 by scombat           #+#    #+#             */
/*   Updated: 2015/12/17 23:59:45 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char num;
    long nbr;

    nbr = (long)(n);
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    if (nbr > 9)
        ft_putnbr_fd(nbr / 10, fd);
    num = nbr % 10;
    ft_putchar_fd(num + '0', fd);
}
