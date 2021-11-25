#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);

int		main(void)
{
	int	i;
	
	i = 0;
	while (i <= 150)
	{
		printf("\n %d return %d \n", i, isprint(i));
		printf("\n %d \n", ft_isprint(i));
		printf("\n");
		i++;
	}

	return (0);
}
