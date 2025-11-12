/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:06:43 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/12 11:14:14 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;

	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp || temp == 0)
		return (NULL);
	ft_bzero(temp, size * nmemb);
	return ((void *)temp);
}

/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	int *pointer;
	int *test;

	pointer = (int*)ft_calloc(10, sizeof(int));
	test = (int*)calloc(10, sizeof(int));

	printf("result calloc %p\n", memset(pointer, 1, 10));
	printf("result test %p\n", memset(pointer, 1, 10));
	
	return(0);
}*/
