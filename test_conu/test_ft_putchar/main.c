#include <stdio.h>

void	ft_putchar(char c);

int		main(void)
{
	printf("\n<empty> -> \n");
	ft_putchar('\0');

	printf("\nx -> \n");
	ft_putchar('x');
	printf("\n");

	return (0);
}
