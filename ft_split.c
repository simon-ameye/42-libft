/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:19:44 by sameye            #+#    #+#             */
/*   Updated: 2021/05/07 01:28:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

int				ft_count(char const *s, char c)
{
	int		count;
	char	*str;

	count = 0;
	str = (char*)s;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		pos;
	int		temp;

	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	pos = 0;
	while (i < ft_count(s, c))
	{
		while (s[pos] == c && s[pos] != '\0')
			pos++;
		temp = pos;
		while (s[pos] != c && s[pos] != '\0')
			pos++;
		if (!(res[i] = ft_substr(s, temp, pos - temp)))
			return (ft_free(res, i - 1));
		i++;
		pos++;
	}
	res[i] = NULL;
	return (res);
}
