#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int		main(void)
{
	int	i;
	
	i = 'A';
	while (i <= 'Z')
	{
		printf("\n A to Z %d \n", isalpha(i));
		printf("\n %d \n", ft_isalpha(i));
		printf("\n");
		i++;
	}

	i = 'a';
	while (i <= 'z')
	{
		printf("\n a to z %d \n", isalpha(i));
		printf("\n %d \n", ft_isalpha(i));
		printf("\n");
		i++;
	}

	i = 0;
	while (i <= 64)
	{
		printf("\n below A %d \n", isalpha(i));
		printf("\n %d \n", ft_isalpha(i));
		printf("\n");
		i++;
	}

	i = 91;
	while (i <= 96)
	{
		printf("\n between z and A %d \n", isalpha(i));
		printf("\n %d \n", ft_isalpha(i));
		printf("\n");
		i++;
	}

	i = 123;
	while (i <= 127)
	{
		printf("\n over Z %d \n", isalpha(i));
		printf("\n %d \n", ft_isalpha(i));
		printf("\n");
		i++;
	}
	return (0);
}
