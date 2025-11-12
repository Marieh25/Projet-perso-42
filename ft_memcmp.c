/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:32:03 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/12 11:18:17 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && temp1[i] == temp2[i])
		i++;
	if (i == n)
		i--;
	return (temp1[i] - temp2[i]);
}

/*#include <stdio.h>
int main(void)
{
	char s1[] = {-128, 0, 127, 0};
	char s2[] = {-128, 0, 127, 0};
	int	a = ft_memcmp(s1, s2, 4);
	printf("%d\n", a);
}*/
