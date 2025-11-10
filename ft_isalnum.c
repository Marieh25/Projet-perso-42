#include <stdio.h>

int ft_isalnum(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9)))
		return (0);
	else
		return (1);
}

int	main(void)
{
	printf("%d", ft_isalnum(8));
	printf("%d", ft_isalnum(','));
	printf("%d", ft_isalnum('F'));
}
