/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:37:09 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:33:56 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (len > 0 && s[i] != '\0')
	{
		str[j] = s[i];
		len--;
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
