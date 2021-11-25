#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c);

int		main(void)
{
	int		i;
	char	c;
	
	i = 0;
	c = i + '0';
	while (i <= 150)
	{
		printf("\n %c return %d \n", c, toupper(i));
		printf("\n %d \n", ft_toupper(i));
		printf("\n");
		i++;
	}

	return (0);
}
