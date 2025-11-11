/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:32:42 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 13:07:32 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "How are you";
	char	*dest;
	dest = malloc (10 * sizeof(char));
	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
	free(dest);
}
*/	
