/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <sameye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:13:44 by sameye            #+#    #+#             */
/*   Updated: 2021/05/10 20:33:08 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>

void	ft_putchar_fd(char c, int fd)
{
	ssize_t	scount;

	scount = write(fd, &c, 1);
	(void)scount;
}
