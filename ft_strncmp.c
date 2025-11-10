/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:44:19 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/10 16:33:38 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if(n == 0)
		return (0);
	while(i < n)
	{
		if((char)s1[i] == 0 || (char)s2[i] == 0 || (char)s1[i] != (char)s2[i])
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "llo world";
	char s2[] = "ell";
	int	a = ft_strncmp(s1, s2, 2);
	printf("%d", a);
}*/
