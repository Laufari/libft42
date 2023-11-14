#include <stdio.h>

int ft_strtest(char *str);
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_strtest(argv[1]));
	return (0);
}
