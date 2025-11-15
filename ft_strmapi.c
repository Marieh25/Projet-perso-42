/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:39:46 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/15 17:26:37 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	toupper_test(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		s_len;
	char	*tab;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	tab = malloc((s_len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	s[] = "How are you";
	char	*u;

	u = ft_strmapi(s, toupper_test);
	printf("%s\n", u);
	free(u);
}*/
