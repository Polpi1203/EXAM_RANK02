/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:07:05 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/01 15:19:36 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    search_and_replace(char *str, char search, char replace)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == search)
        {
            str[i] = replace;
            write (1, &str[i], 1);
        }
        else
            write (1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    if (argc == 4)
        search_and_replace(argv[1], *argv[2], *argv[3]);
    write (1, "\n", 1);
}