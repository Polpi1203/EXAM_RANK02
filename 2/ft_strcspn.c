/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:10:06 by polpi             #+#    #+#             */
/*   Updated: 2022/12/07 14:45:39 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *charset)
{
    size_t  i;

    i = 0;
    while (*s != '\0')
    {
        while (*charset != '\0')
        {
            if (*charset == *s)
                return (0);
            charset++;
        }
        i++;
        s++;
    }
    return (i);
}


int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", "-----Real function-----");
    printf("%lu\n", strcspn(av[1], av[2]));
    printf("%s\n", "-----My function-----");
    printf("%zu\n", ft_strcspn(av[1], av[2]));
}