/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:29:26 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:40:12 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *temp = (unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if(temp[i] == (unsigned char)c)
			return (&temp[i]);
		i++;
	}
	return NULL;
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "Hello";
	char *st;
	printf("%p\n", s);
	ft_memchr(st, 1, 6);
	printf("%p\n", st);
}*/
