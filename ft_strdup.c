/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:43:34 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/10 19:05:11 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	len_s;
	char	*s1;

	i = 0;
	len_s = ft_strlen((char *)s);
	s1 = malloc(len_s * sizeof(char));
	if(!pointer)
		return (NULL);
	while(i < len_s)
	{
		s1[i] = s[i];
		i++;
	}
	return(s1);
}

#include <stdio.h>
int	main(void)
{
	char s[] = "How are you";
	char *s1;

	printf("%s\n", s);
	s1 = ft_strdup(s);
	printf("%s\n", s1);
	return(0);
}
