/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:52:52 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:23:46 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		if ((i < size - 1) && (size > 0))
		{
			dest[i] = src[i];
			i++;
		}
		j++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (j);
}
