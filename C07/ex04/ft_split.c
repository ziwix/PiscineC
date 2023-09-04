/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:33:40 by megadiou          #+#    #+#             */
/*   Updated: 2023/09/04 18:27:44 by megadiou         ###   ########.fr       */
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

int	ft_check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_seperate_words(char *str, char *charset)
{
	
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	save;

	i = 0;
	count = 0;
	save = i;
	while (str[i])
	{
		if (ft_check_sep(str[i], charset) == 1 && (save - i) != 1)
		{
			count++;
			save = i;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**strs;

	i = 0;
	count = ft_count_words(str, charset);
	strs = (char **) malloc(sizeof(char) * count);
	while (i < count)
	{
		strs[i] = (char *) malloc(sizeof(char) * /* LENGTH OF MY WORDS */);
		i++;
	}
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	for (int i = 0; i != ac; i++)
		printf("%s", ft_split(av[1], av[2])); //String and seps
	return (0);
}
