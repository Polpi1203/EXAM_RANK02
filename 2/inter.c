/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:56:17 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/08 10:46:39 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one. */

#include <unistd.h>
#include <stdio.h>

int check_doubles(char *str, char c, int j)
{
    int i;

    i = 0;
    while (i < j && j != 0)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 3)
    {
        while (av[1][i] != '\0')
        {
            j = 0;
            while (av[1][i] != av[2][j])
                j++;
            if (av[1][i] == av[2][j])
                    if (check_doubles(av[1], av[1][i], i) == 0)
                        write (1, &av[1][i], 1);
                j++;
            i++;    
        }
    }
    write (1, "\n", 1);
}

