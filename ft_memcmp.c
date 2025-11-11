/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:32:03 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:53:42 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	*temp1 = (unsigned char *)s1;
	*temp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && temp1[i] != 0 && temp2[i] != 0)
		i++;
	return (temp1[i] - temp2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hell";
	int	a = ft_memcmp(s1, s2, 5);
	printf("%d\n", a);
}*/
