/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:26:10 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 15:10:02 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t	len_little;

	i = 0;
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i <= (len - len_little) && big[i] != '\0')
	{
		if (ft_strncmp(big + i, little, len_little) == 0)
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "wello world";
	char s2[] = "wo";
	printf("%s\n", strnstr(s1, s2, 8));
	printf("%s\n", ft_strnstr(s1, s2, 8));
	return (0);
}*/
