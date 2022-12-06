/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:47:14 by polpi             #+#    #+#             */
/*   Updated: 2022/12/06 17:03:47 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*str != '\0')
    {
        if (*str >= 9 && *str <= 13 && *str == 32)
            str++;
        if (*str == '-')
            sign = -1;
        if (*str == '-' || *str == '+')
            str++;
        if (*str >= '0' && *str <= '9')
            res = res * 10 + (*str - 48);
        str++;
    }
    return (res * sign);
}
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_atoi(av[1]));
}