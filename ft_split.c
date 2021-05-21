/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:19:44 by sameye            #+#    #+#             */
/*   Updated: 2021/05/21 18:44:56 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **result, int count)
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

int	ft_count(char const *s, char c)
{
	int		count;
	char	*str;

	count = 0;
	str = (char *) s;
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

char	**ft_create_words(int count, char const *s, char c, char **res)
{
	int		i;
	int		pos;
	int		temp;

	i = 0;
	pos = 0;
	while (i < count)
	{
		while (s[pos] == c && s[pos] != '\0')
			pos++;
		temp = pos;
		while (s[pos] != c && s[pos] != '\0')
			pos++;
		res[i] = ft_substr(s, temp, pos - temp);
		if (!(res[i]))
			return (ft_free(res, i - 1));
		i++;
		pos++;
		res[i] = NULL;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;

	count = ft_count(s, c);
	if (!s || s[0] == 0 || !count)
	{
		res = (char **)malloc(sizeof(char *));
		if (!(res))
			return (NULL);
		res[0] = 0;
		return (res);
	}
	res = malloc(sizeof(char *) * (count + 1));
	if (!(res))
		return (NULL);
	res = ft_create_words(count, s, c, res);
	return (res);
}
