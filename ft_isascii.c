#include <stdio.h>

int ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}

int	main(void)
{
	printf("%d", ft_isascii(5));
	printf("%d", ft_isascii(','));
}
