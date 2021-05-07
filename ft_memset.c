/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:04:55 by sameye            #+#    #+#             */
/*   Updated: 2021/05/07 13:51:07 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_uc;
	unsigned char	o;

	o = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		pt_uc = (unsigned char *)s;
		*(pt_uc + i) = o;
		i++;
	}
	return (s);
}
