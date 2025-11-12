/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:48:00 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/12 12:51:55 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 <= size)
	{
		ft_memcpy (dst, src, src_len + 1);
	}
	else if (size != 0)
	{
		ft_memcpy (dst, src, size - 1);
		dst [size - 1] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
int	main (void)
{
	char	src[] = "How are you";
	char	*dest;
	dest = malloc (10 * sizeof (char));
	ft_strlcpy(dest, src, 15);
	printf("%s\n", dest);
	free(dest);
}*/
