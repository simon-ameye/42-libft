/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:24:59 by sameye            #+#    #+#             */
/*   Updated: 2021/05/05 19:27:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*result;
	size_t		i;

	i = 0;
	if (!(result = malloc(count * size)))
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
