/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:47:44 by polpi             #+#    #+#             */
/*   Updated: 2022/12/07 15:08:54 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char *ft_strpbrk(const char *s, const char *charset)
{
    while (*charset != '\0')
    {
        if (*s == *charset)
            return ((char *)(s));
        charset++;
    }
    return (NULL);
}


int main (int ac, char **av)
{
    (void)ac;
    printf("%s\n", "-----Real function-----");
    printf("%s\n", strpbrk(av[1], av[2]));
    printf("%s\n", "-----My function-----");
    printf("%s\n", ft_strpbrk(av[1], av[2]));
}