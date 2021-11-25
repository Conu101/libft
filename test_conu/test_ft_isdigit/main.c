#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c);

int		main(void)
{
	int	i;
	
	i = '0';
	while (i <= '9')
	{
		printf("\n %d return %d \n", i, isdigit(i));
		printf("\n %d \n", ft_isdigit(i));
		printf("\n");
		i++;
	}

	i = 10;
	while (i <= 127)
	{
		printf("\n %d return %d \n", i, isdigit(i));
		printf("\n %d \n", ft_isdigit(i));
		printf("\n");
		i++;
	}

	return (0);
}
