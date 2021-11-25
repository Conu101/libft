#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);

int		main(void)
{
	int	i;
	
	i = 0;
	while (i <= 150)
	{
		printf("\n %d return %d \n", i, isascii(i));
		printf("\n %d \n", ft_isascii(i));
		printf("\n");
		i++;
	}

	return (0);
}
