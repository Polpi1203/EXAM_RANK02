/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:52:57 by afaucher          #+#    #+#             */
/*   Updated: 2022/12/01 15:19:32 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int     i;
    int     j;
    char    *alpha_lower;
    char    *alpha_upper;

    alpha_lower = "aabcdefghijklmnopqrstuvwxyz";
    alpha_upper = "AABCDEFGHIJKLMNOPQRSTUVWXYZ";
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {   
            j = 1;
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                while (argv[1][i] != alpha_upper[j])
                    j++;
                while (j > 0)
                {
                    write (1, &argv[1][i], 1);
                    j--;
                }
            }
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
            {
                while (argv[1][i] != alpha_lower[j])
                    j++;
                while (j > 0)
                {
                    write (1, &argv[1][i], 1);
                    j--;
                }
            }
            else 
                write (1, &argv[1][i], 1);
            i++; 
        }
    }
    write (1, "\n", 1);
}