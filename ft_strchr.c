/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:25:06 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 22:56:32 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c != '\0')
	{
		while (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)&(s[i]));
			i++;
		}
	}
	else
	{
		while (s[i])
			i++;
		return ((char *)&(s[i]));
	}
	return (NULL);
}
