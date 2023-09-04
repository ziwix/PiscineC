/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:54:40 by megadiou          #+#    #+#             */
/*   Updated: 2023/08/29 12:07:03 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	x;

	x = ac - 1;
	if (ac > 1)
	{
		while (x > 0)
		{
			i = 0;
			while (av[x][i])
				write(1, &av[x][i++], 1);
			write(1, "\n", 1);
			x--;
		}	
	}
	return (0);
}
