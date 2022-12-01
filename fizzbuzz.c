/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:37:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/01 10:50:26 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int i)
{
    char    *a;

    a = "0123456789";
    if (i < 10)
        write (1, &a[i], 1);
    else
    {
        ft_putchar(i / 10);
        ft_putchar(i % 10);
    }
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else
            ft_putchar(i);
        i++;
        write (1, "\n", 1);
    }
}