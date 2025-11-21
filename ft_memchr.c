/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:29:26 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/21 12:21:29 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "Hello";
	printf("%s\n", s);
	printf("%p\n", ft_memchr(s, 'l', 2));
}*/
