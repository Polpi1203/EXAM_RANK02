/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:47:27 by polpi             #+#    #+#             */
/*   Updated: 2022/12/13 20:03:50 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int strlen_string(char *str)
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == 32 && str[i] != '\0')
            i++;
        if (str[i] != 32 && str[i] != '\0')
            len++;
        while (str[i] != 32 && str[i] != '\0')
            i++;
    }
    return (len);
}

char    *count_and_copy(char *str)
{
    int     len;
    int     j;
    char    *res;

    len = 0;
    while (str[len] != 32 && str[len] != '\0')
        len++;
    res = (char *)malloc(sizeof(char) * len + 1);
    j = 0;
    if (res == NULL)
        return (NULL);
    while (j < len)
    {
        res[j] = str[j];
        j++;
    }
    res[j] = '\0';
    return (res);
}

char    **ft_split(char *str)
{
    int     i;
    int     len;
    char    **result;

    i = 0;
    len = strlen_string(str) + 1;
    result = (char **)malloc(sizeof(char *) * len);
    if (result == NULL)
        return (NULL);
    while (i < len - 1)
    {
        while (*str == 32 && *str != '\0')
            str++;
        if (str[i] != 32 && str[i] != '\0')
        {
            result[i] = count_and_copy(str);
            i++;
        }
        while (*str != 32 && *str != '\0')
            str++;
    }
    result[i] = 0;
    return (result);
}

int main(int ac, char **av)
{
    (void)ac;
    //(void)av;
    int i = 0;
    int j;
    char    **test = ft_split(av[1]);
    while (i < 5)
    {
        j = 0;
        while (test[i][j] != '\0')
        {
            write (1, &test[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
        i++;
    }
}