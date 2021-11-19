#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	printf("\n<empty> -> \n");
	ft_putstr("   ");

	printf("\ntest abcd 123 !*? -> \n");
	ft_putstr("test abcd 123 !*?");
	printf("\n");

	return (0);
}
