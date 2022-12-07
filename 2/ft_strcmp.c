/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:31:33 by polpi             #+#    #+#             */
/*   Updated: 2022/12/07 14:04:25 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1  != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
	}
	return (0);
}

int main (int ac, char **av)
{
	(void)ac;
	printf("%s\n", "------ Real function ------");
	printf("%d\n", strcmp(av[1], av[2]));
	printf("%s\n", "------ My function ------");
	printf("%d\n", ft_strcmp(av[1], av[2]));
}