/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:38:22 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 11:50:43 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
	{
		((unsigned char *)s)[n] = (unsigned char) c;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "How are you";
	ft_memset(&s[1], '0', 8);
	printf("%s", s);
}*/
