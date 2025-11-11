/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:55:42 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:33:54 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen((char *) src);
	dst_len = ft_strlen((char *) dst);
	if (dst_len >= size)
		return (src_len + size);
	else
	{
		while (i < (size - dst_len - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (src_len + dst_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dst[] = "Hello";
	char	src[] = "World";
	printf("%s\n%s\n", dst, src);
	ft_strlcat(dst, src, 15);
	printf("%s\n", dst);
}*/
