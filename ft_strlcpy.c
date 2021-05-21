/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:52:52 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 18:58:00 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!(dst) || !(src))
		return (0);
	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		if ((i < size - 1) && (size > 0))
		{
			dst[i] = src[i];
			i++;
		}
		j++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (j);
}
