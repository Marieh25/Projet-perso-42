/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:43:22 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/21 17:24:17 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *scr, size_t n)
{
	size_t	i;

	i = 0;
	if (scr < dest)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)scr)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)scr)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	scr[] = "How are you";
	char	*dest = scr + 5;
	ft_memmove(dest, scr, 3);
	printf("%s\n", dest);
}
*/
