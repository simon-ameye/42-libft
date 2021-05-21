/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:34:01 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 13:11:32 by sameye           ###   ########.fr       */
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

char	*ft_write_res (int i, int j, char *res, char const *s1)
{
	unsigned int	size;

	size = 0;
	while (i < j)
	{
		res[size] = s1[i++];
		size++;
	}
	res[size] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	i = 0;
	while (isinset(s1[i], set) && s1[i])
		i++;
	j = 0;
	while (s1[j])
		j++;
	while (j > i && isinset(s1[j - 1], set))
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!(res))
		return (NULL);
	ft_write_res(i, j, res, s1);
	return (res);
}
