/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scombat <scombat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 12:44:49 by scombat           #+#    #+#             */
/*   Updated: 2018/04/07 11:22:39 by scombat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <string.h>

/**
 * FILES
 */

void    test_fgetc(void)
{
    int fd;
    char    c;

    if ((fd = ft_fopen("README.md", "r")))
    {
        while ((c = ft_fgetc(fd)))
        {
            printf("%c", c);
        }
    }

}

void    test_file(void)
{
    printf(">>> [ft_file]\t\t\t");
    char **file = ft_file("./README.md");
    if (0 != strcmp("The libft project ! [This sentence is only for a test]", file[0]))
      printf("F");
    else
      printf(".");
    if (0 != strcmp("The whole project should be the norm!", file[4]))
      printf("F\n");
    else
      printf(".\n");
}

void    test_file_get_contents(void)
{
    char * str;
    printf(">>> [ft_file_get_contents]\t");
    str = ft_file_get_contents("README.md", false, false);
    if (!strstr(str, "libft is a set of functions of the libc as described"))
      printf("F");
    else
      printf(".");
    if (0 != strcmp("This sentence is only for a test", ft_file_get_contents("README.md", 21, 32)))
      printf("F\n");
    else
      printf(".\n");
}

void    test_readfile(void)
{
    printf(">>> [ft_readfile]\t\t");
    if (ft_readfile("./includes/libft.h") <= 0)
        printf("F");
    else
      printf(".");
    if (ft_readfile("wedfrgthjyuhrtgthth") > 0)
        printf("F\n");
    else
      printf(".\n");
}

void    test_fopen(void)
{
    printf(">>> [ft_fopen]\t\t\t");
    if (ft_fopen("README.md", "r") <= 0)
        printf("F");
    else
      printf(".");
    if (ft_fopen("wedfrgthjyuhrtgthth", "w+") > 0)
        printf("F\n");
    else
      printf(".\n");
}

void    test_file_exists_basic(void)
{
    printf(">>> [ft_file_exists]\t\t");
    if (!ft_file_exists("README.md"))
        printf("F");
    else
      printf(".");
    if (ft_file_exists("wedfrgthjyuhrtgthth"))
        printf("F");
    else
      printf(".");
    if (!ft_file_exists("includes"))
        printf("F\n");
    else
      printf(".\n");
}

int main(void)
{
  test_file_exists_basic();
  test_fopen();
  // test_readfile();
  test_file_get_contents();
  test_file();
  test_fgetc();
  return (0);
}
