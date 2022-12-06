/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:27:29 by polpi             #+#    #+#             */
/*   Updated: 2022/12/06 15:51:26 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 4)
    {
        if (av[2][i] == '*')
            printf("%d", atoi(av[1]) * atoi(av[3]));
        else if (av[2][i] == '-')
            printf("%d", atoi(av[1]) - atoi(av[3]));
        else if (av[2][i] == '+')
            printf("%d", atoi(av[1]) + atoi(av[3]));
        else if (av[2][i] == '%')
            printf("%d", atoi(av[1]) % atoi(av[3]));
        else if (av[2][i] == '/')
            printf("%d", atoi(av[1]) / atoi(av[3]));
    }
    else 
        write (1, "\n", 1);
}