#include <stdio.h>
char **creat_tab(int size);
void print_tab(char **tab, int size);
int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	print_tab(creat_tab(8),8);
}
