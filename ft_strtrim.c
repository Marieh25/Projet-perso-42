/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:39:11 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/17 13:18:22 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_settrim(const char *set, char c, int set_len)
{
	int	index;

	index = 0;
	while (index < set_len)
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		set_len;
	int		start;
	int		end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = 0;
	while (ft_settrim(set, s1[start], set_len) != 0)
		start++;
	while (ft_settrim(set, s1[s1_len - 1], set_len) != 0)
		s1_len--;
	end = s1_len;
	dest = ft_substr(s1, start, end - start);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "uyaehuyuyuyyuuyehayyu";
	char	set[] = "uyae";

	printf("%s\n", ft_strtrim(s1, set));
}*/
