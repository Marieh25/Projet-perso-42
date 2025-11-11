/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:43:45 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:38:21 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		s--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 'e';
	char str[] = "How are you";
	char *st;
	printf("%s\n", str);
	st = ft_strrchr(str, a);
	printf("%s\n", st);
}*/
