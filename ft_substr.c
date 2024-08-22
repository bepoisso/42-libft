/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:44:13 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/22 14:58:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = NULL;
	if (start >= ft_strlen(s))
	{
		dest = malloc(sizeof(char));
		dest[i] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char ) * len + 1);
	if (dest == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
