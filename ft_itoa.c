/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:04:24 by sameye            #+#    #+#             */
/*   Updated: 2021/05/13 18:24:09 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenofint(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_lenofint(n);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!(string))
		return (NULL);
	string[0] = '-';
	string[len] = '\0';
	if (n < 0)
		n = -n;
	len--;
	while (n)
	{
		string[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (string);
}
