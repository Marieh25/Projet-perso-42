/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:13:46 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/10 19:57:25 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		((unsigned char *)s)[n] = ('\0');
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	s[] = "How are you";
	ft_bzero(s+5, 4);
	printf("%s", s);
}*/
