/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:20:14 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:29:18 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*i1;
	unsigned char	*i2;

	i1 = (unsigned char *)src;
	i2 = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		*i2 = *i1;
		i1++;
		i2++;
		n--;
	}
	return (dest);
}
