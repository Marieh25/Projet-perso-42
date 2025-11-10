/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:42:17 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/10 12:38:29 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if(nptr[i] == '-' && ft_isdigit(nptr[i + 1]) == 1)
	{
		sign = -1;
		i++;
	}
	if(nptr[i] == '+' && ft_isdigit(nptr[i + 1]) == 1)
		i++;
	while(ft_isdigit(nptr[i]) == 1)
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if(sign == -1)
		return(-result);
	else
		return(result);
}

#include <stdio.h>
int	main(void)
{
	char tab[] = "  5856dw";
	printf("%s\n", tab);
	printf("%d\n", ft_atoi(tab));
}
