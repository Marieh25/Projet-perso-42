/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:48:00 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/10 11:11:23 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
size_t	ft_strlen(char *str);
void	*ft_memcpy(void	*dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 <= size)
	{
		ft_memcpy (dest, src, src_len + 1);
	}
	else if (size != 0)
	{
		ft_memcpy (dest, src, size - 1);
		dest [size - 1] = '\0';
	}
	return (src_len);
}

int	main (void)
{
	char	src[] = "How are you";
	char	*dest;
	dest = malloc (10 * sizeof (char));
	ft_strlcpy(dest, src, 15);
	printf("%s\n", dest);
	free(dest);
}
