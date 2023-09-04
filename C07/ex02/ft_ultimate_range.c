/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:05 by megadiou          #+#    #+#             */
/*   Updated: 2023/09/03 18:42:36 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	stock;

	i = 0;
	if (max > min)
	{
		stock = max - min;
		tab = (int *) malloc(sizeof(int) * stock);
	}
	else
		return (0);
	while (i < stock)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (stock);
}
