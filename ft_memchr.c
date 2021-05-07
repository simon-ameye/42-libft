/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:37:09 by sameye            #+#    #+#             */
/*   Updated: 2021/05/05 19:43:19 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		cmp;
	const char	*cs;
	size_t		i;

	cs = s;
	cmp = c;
	i = 0;
	while (i < n)
	{
		if (cmp == cs[i])
			return ((void *)cs + i);
		i++;
	}
	return (NULL);
}
