/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:26:10 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/19 17:40:11 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;
	size_t	len_big;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0')
		return (0);
	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (len_little > len)
		return (NULL);
	while (i <= (len - len_little) && i <= len_big - len_little)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len_little) == 0)
				return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "coucou";
	char s2[] = "cou";
	printf("%p\n", ft_strnstr(s1, s2, 3));
	return (0);
}*/
