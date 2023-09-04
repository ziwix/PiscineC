/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:58:43 by megadiou          #+#    #+#             */
/*   Updated: 2023/09/03 18:43:42 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
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
		printf("%d/", tab[i]);
		i++;
	}
	return (tab);
}
