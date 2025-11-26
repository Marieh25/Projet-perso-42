/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:41:20 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/26 10:00:29 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_isalpha('d'));
	printf("%d", ft_isalpha(8));
	printf("%d", ft_isalpha('F'));
}*/
