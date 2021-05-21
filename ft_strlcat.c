/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:14:44 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 19:28:49 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	k = i;
	while ((k + 2 <= (size)) && src[k - i] != '\0')
	{
		dst[k] = src[k - i];
		k++;
	}
	if (size >= 1)
		dst[k] = '\0';
	if (size < i)
		return (size + j);
	return (i + j);
}
