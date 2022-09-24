#include <stdlib.h>

char **creat_tab(int size)
{
	int y;
	char **tab;

	y = 0;
	tab = (char**)malloc(sizeof(char) * size - 1);
	while (y < size)
	{

		tab[y] = (char *) malloc(size - 1 * sizeof(char));
		y++;
	}
	y = 0;
	while (y < size-1)
	{
		tab[y] = "1 2 3 4";
		y++;
	}
	return(tab);
}
