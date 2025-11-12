/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:55:42 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 20:49:39 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	else
	{
		i = 0;
		while (i < (size - dst_len - 1) && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (src_len + dst_len);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[] = "AAAAAAAAA";
	char	dst[] = "B";
	printf("%s\n%s\n", dst, src);
	ft_strlcat(dst, src, -1);
	printf("%s\n", dst);
}*/
