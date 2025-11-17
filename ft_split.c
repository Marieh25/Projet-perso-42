/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:53:18 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/17 13:24:43 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **words_tab, int j)
{
	while (j > 0)
	{
		free(words_tab[j - 1]);
		j--;
	}
	free(words_tab);
}

static void	ft_size(char const *s, char **words_tab, char c)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	start = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		words_tab[j] = ft_substr(s, start, i - start);
		if (!words_tab[j])
		{
			ft_free(words_tab, j);
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**words_tab;

	if (!s)
		return (NULL);
	wordcount = count_words(s, c);
	words_tab = malloc((wordcount + 1) * sizeof(char *));
	if (!words_tab)
		return (NULL);
	words_tab[wordcount] = NULL;
	ft_size(s, words_tab, c);
	return (words_tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = " How are you  ";
	char	a = ' ';
	
	char	**res = ft_split(src, a);
	int	i;

	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}*/
