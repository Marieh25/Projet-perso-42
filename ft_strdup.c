/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:43:34 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/11 18:47:26 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len_s;
	char	*s1;

	len_s = ft_strlen(s);
	s1 = malloc((len_s + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		s1[i] = s[i];
		i++;
	}
	s1[len_s] = '\0';
	return (s1);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "How are you";
	char *s1;

	printf("%s\n", s);
	s1 = ft_strdup(s);
	printf("%s\n", s1);
	return(0);
}*/
