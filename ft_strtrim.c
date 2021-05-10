/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:34:01 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 21:15:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	i = 0;
	while (isinset(s1[i], set) && s1[i])
		i++;
	j = 0;
	while (s1[j])
		j++;
	while (j > i && isinset(s1[j - 1], set))
		j--;
	size = j - i;
	res = malloc(sizeof(char) * (size + 1));
	if (!(res))
		return (NULL);
	size = 0;
	while (i < j)
	{
		res[size] = s1[i++];
		size++;
	}
	res[size] = '\0';
	return (res);
}
