/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:26:10 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/15 17:39:30 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;
	size_t	len_big;

	i = 0;
	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (little == NULL || *little == '\0')
		return ((char *)big);
	if (big == NULL || len_little > len)
		return (NULL);
	while (i <= (len - len_little) && i <= len_big - len_little)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big + i, little, len_little) == 0)
			{
				return ((char *)big + i);
			}
			i++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "wello world";
	char s2[] = "lo";
	printf("%s\n", ft_strnstr(s1, s2, 6));
	return (0);
}*/
