#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int		main(void)
{
	int	i;
	
	i = 'A';
	while (i <= 'Z')
	{
		printf("\n %d \n", isalpha(i));
		ft_isalpha(i);
		printf("\n");
		i++;
	}


	i = 'a';
	while (i <= 'z')
	{
		printf("\n %d \n", isalpha(i));
		ft_isalpha(i);
		printf("\n");
		i++;
	}

	return (0);
}
