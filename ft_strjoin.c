/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:15:40 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/13 15:09:24 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	char	*temp;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	temp = malloc ((size_s1 + size_s2 + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s1, size_s1);
	ft_memcpy(&temp[size_s1], s2, size_s2 + 1);
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "tripouille";
	char s2[] = "42";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
