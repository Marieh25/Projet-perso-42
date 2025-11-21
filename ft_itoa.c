/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:57:48 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/19 16:36:44 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(long c, int *sign)
{
	int	count;

	count = 1;
	*sign = 1;
	if (c < 0)
	{
		c = -c;
		*sign = -1;
	}
	while (c > 9)
	{
		c /= 10;
		count++;
	}
	if (*sign < 0)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*string;
	int		sign;
	long	number;

	number = n;
	count = ft_count(number, &sign);
	string = malloc((count + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[count] = '\0';
	count--;
	if (sign < 0)
		number = number * -1;
	while (count >= 0)
	{
		string[count] = ((number % 10) + '0');
		number /= 10;
		count--;
	}
	if (sign < 0)
		string[0] = '-';
	return (string);
}

/*#include <stdio.h>
int	main(void)
{
	int	c = -2147483648;
	char *str = ft_itoa(c);
	printf("%s", str);
}*/
