/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:29:17 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:32:52 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (*s)
		s++;
	while (i >= 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		i--;
		s--;
	}
	return (NULL);
}
