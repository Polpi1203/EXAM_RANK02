/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:59:27 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/08 11:29:16 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}


int main(int ac, char **av)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(av[1]);
    if (ac == 2)
    {
        while (av[1][len] == 9 || av[1][len] == 32)
            len--;
        while (av[1][len] != 9 && av[1][len] != 32)
        {
            i++;
            len--;
        }
        len = len + 1;
        i = i - 1;
        while (i > 0)
        {
            write (1, &av[1][len], 1);
            len++;
            i--;
        }
    }
    write (1, "\n", 1);
}