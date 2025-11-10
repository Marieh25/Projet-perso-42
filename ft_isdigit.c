int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isdigit(8));
	printf("%d", ft_isdigit('F'));
}*/
