/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 01:43:55 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/25 15:11:27 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*tab;

	tab = NULL;
	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, (size * nmemb));
	return ((void *)tab);
}
