/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:17:51 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:25:23 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cus1;
	const unsigned char	*cus2;

	cus2 = s1;
	cus1 = s2;
	i = 0;
	while (i < n)
	{
		if (cus2[i] != cus1[i])
		{
			return ((int)(cus2[i] - cus1[i]));
		}
		i++;
	}
	return (0);
}
