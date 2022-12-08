/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:47:31 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/08 10:58:28 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    int i;

    i = 0;
    if (n == 0)
        return (0);
    if (n % 2 == 0 || n == 1)
        return (1);
    return (0);

}

int main(int ac, char **av)
{
    (void)ac;
    printf("%d", is_power_of_2(atoi(av[1])));

}