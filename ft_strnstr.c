/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:26:23 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 21:35:42 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_found(const char *haystack, size_t i,
				const char *needle, size_t len)
{
	int	index;

	index = 0;
	while (needle[index])
	{
		if (i >= len || haystack[i] != needle[index])
			return (0);
		i++;
		index++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack,
					const char *needle, size_t len)
{
	size_t	i;
	int		is_found;

	if (!needle[0])
		return ((char *)haystack);
	if (!haystack[0])
		return (NULL);
	i = 0;
	is_found = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			is_found = ft_is_found(haystack, i, needle, len);
			if (is_found == 1)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
