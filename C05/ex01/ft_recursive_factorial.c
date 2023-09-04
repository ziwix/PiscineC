/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:31:59 by megadiou          #+#    #+#             */
/*   Updated: 2023/09/04 15:54:58 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (i > 1)
	{
		nb = i * ft_recursive_factorial(nb - 1);
		i--;
	}
	return (nb);
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_recursive_factorial(atoi(av[1])));
	return (0);
}
