/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:33:48 by megadiou          #+#    #+#             */
/*   Updated: 2023/08/24 15:48:55 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned	int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	size = 0;
	while (dest[size])
		size++;
	return (size);
}
