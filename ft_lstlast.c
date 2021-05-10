/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:40:15 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:24:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptlist;

	ptlist = lst;
	if (ptlist == NULL)
		return (ptlist);
	while (ptlist->next)
		ptlist = ptlist->next;
	return (ptlist);
}
