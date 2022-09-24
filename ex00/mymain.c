#include <stdio.h>
char *ft_first_line(char *str);

int main(int ac, char **av)
{
	(void) ac;
	printf("%s\n%s",av[1],ft_first_line(av[1]));
}
