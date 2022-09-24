#include <stdio.h>

char **creat_tab(int size);
void print_tab(char **tab, int size);
char **parse_input(char *str);

int main(int ac, char **av)
{
	(void) ac;

	char **tab;
		
	tab = creat_tab(8);
	print_tab(tab,8);
	print_tab(parse_input(av[1]),8);
	return (0);
}
