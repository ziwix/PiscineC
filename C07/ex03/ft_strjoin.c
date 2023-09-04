/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:33:06 by megadiou          #+#    #+#             */
/*   Updated: 2023/09/04 18:13:43 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_putsep(int *j, char *dest, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[*j] = sep[i];
		i++;
		*j = *j + 1;
	}
	return (dest);
}

char	*ft_putstr(int *j, char *dest, char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		dest[*j] = strs[i];
		i++;
		*j = *j + 1;
	}
	return (dest);
}

char	*ft_put_strs(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		dest = ft_putstr(&j, dest, strs[i]);
		dest = ft_putsep(&j, dest, sep);
		i++;
	}
	dest = ft_putstr(&j, dest, strs[i]);
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	i = 0;
	if (size <= 0)
	{
		dest = (char *) malloc(sizeof(char) * 1);
		dest[i] = '\0';
		return (dest);
	}
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ft_strlen(sep) * size - 1;
	dest = (char *)malloc(sizeof(char) * length);
	if (!dest)
		return (0);
	dest = ft_put_strs(size, dest, strs, sep);
	return (dest);
}
