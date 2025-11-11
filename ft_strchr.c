/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:58:20 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:37:05 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == ((char) c))
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s++);
	return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 's';
	char str[] = "test";
	char *st;
	printf("%s\n", str);
	st = ft_strchr(str, a);
	printf("%s\n", st);

}*/
