#include <stdio.h>

int	ft_isprint(int c)
{
	if (!(c > 20 && c < 126))
		return (0);
	else
		return (1);
}

int	main(void)
{
	printf("%d", ft_isprint(5));
	printf("%d", ft_isprint(','));
}
