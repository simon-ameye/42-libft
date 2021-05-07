/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:17:20 by sameye            #+#    #+#             */
/*   Updated: 2021/05/07 01:29:01 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptlist;

	ptlist = lst;
	count = 0;
	if (lst == NULL)
		return (count);
	count++;
	while (ptlist->next)
	{
		count++;
		ptlist = ptlist->next;
	}
	return (count);
}
