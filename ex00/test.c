#include <stdlib.h>
#include <stdio.h>
int	ft_col_ok(char c, char **tab, int col)
{
	int i;

	i = 0;
	while(i < 8 && tab[i][col])
	{
		if (c == tab[i][col])
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_line_ok(char c, char **tab, int line)
{
	int i;

	i = 0;
	while(i < 8 && tab[line][i])
	{
		if (c == tab[line][i])
			return (0);
		i = i + 2;
	}
	return (1);
}

char ft_test(char c, char **tab, int line, int col)
{
	
	if ((ft_line_ok(c, tab, line) == 0 || ft_col_ok(c, tab, col) == 0))
		{
			if (c < '4')
				{
					c = c + 1;
					ft_test(c , tab, line, col);
				}
			else
				c = '5';	
		}
	else if (ft_line_ok(c, tab, line) && ft_col_ok(c, tab, col))
		return (c);
	return (c);
}

int main()
{
	char **tab;
	tab = (char **)malloc(sizeof(char*) * 7);
	tab[0] = (char *)malloc(sizeof(char*) * 7);
	tab[1] = (char *)malloc(sizeof(char*) * 7);
	tab[2] = (char *)malloc(sizeof(char*) * 7);
	tab[3] = (char *)malloc(sizeof(char*) * 7);
	tab[4] = (char *)malloc(sizeof(char*) * 7);
	tab[5] = (char *)malloc(sizeof(char*) * 7);
	tab[6] = (char *)malloc(sizeof(char*) * 7);



	tab[0] = "1 2 3 4";
	tab[2] = "4 v v v";
	tab[4] = "v v v v";
	tab[6] = "4 3 2 1";
/*
	tab[0][0] = '1';
	tab[0][1] = '2';
	tab[0][2] = '3';
	tab[0][3] = '4';
	tab[1][0] = '0';
	tab[1][1] = 'a';
	tab[1][2] = 'b';
	tab[1][3] = 'b';
	tab[2][0] = 'v';
	tab[2][1] = 'v';
	tab[2][2] = 'v';
	tab[2][3] = 'v';
	tab[3][0] = 'v';
	tab[3][1] = 'v';
	tab[3][2] = 'v';
	tab[3][3] = 'v';
	tab[4][0] = 'v';
	tab[4][1] = 'v';
	tab[4][2] = 'v';
	tab[4][3] = 'v';
*/
/*
ft_test(tab[2][0], tab, 2, 0);
printf
	("%c", tab[2][0]);*/
printf
	("%c", ft_test(tab[2][0], tab, 2, 0));
}
