/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:22:34 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 12:51:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	char			*news;
	unsigned int	i;

	if ((s == NULL) || (*f == NULL))
		return (NULL);
	size = ft_strlen((char *)s);
	news = malloc(sizeof(char) * (size + 1));
	if (!(news))
		return (NULL);
	i = 0;
	while (i < size)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
