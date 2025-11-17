/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:36:12 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/15 19:06:43 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	put_num(int n, int fd)
{
	if (n <= -10)
	{
		put_num((n / 10), fd);
	}
	n = '0' - (n % 10);
	ft_putchar_fd(n, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 0)
		n = -n;
	put_num(n, fd);
}
/*
int	main(void)
{
	ft_putnbr_fd(0, 1);
	return (0);
}*/
