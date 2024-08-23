/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:23:59 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/23 17:15:42 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (str[i] == c && check == 1)
			check = 0;
		i++;
	}
	return (count);
}

static int	ft_strllen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		wc;

	i = 0;
	if (!s || !c)
		return (NULL);
	wc = word_count(s, c);
	strs = (char **)malloc(sizeof(char *) * wc + 1);
	while (i < wc)
	{
		while (*s == c)
			s++;
		strs[i] = malloc(sizeof(char) * ft_strllen(s, c) + 2);
		ft_strlcpy(strs[i], s, ft_strllen(s, c) + 1);
		s += ft_strllen(s, c) + 1;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
