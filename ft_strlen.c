#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	index;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
/*
int	main(void)
{
	char	str[] = "How are you";
	int	a;
	a = ft_strlen(str);
	printf("%d\n", a);
	return(0);
}*/
