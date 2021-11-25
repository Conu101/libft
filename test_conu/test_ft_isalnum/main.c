#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);

int		main(void)
{
	int	i;
	
	i = 0;
	while (i <= 127)
	{
		printf("\n %d return %d \n", i, isalnum(i));
		printf("\n %d \n", ft_isalnum(i));
		printf("\n");
		i++;
	}

	return (0);
}
