#include <stdlib.h>
int	do_size(char *str)
{
	int	n;
	int 	i;

	n = 0;
	i = 0;
	while (str[i])
	{
		if(((i % 2) == 0) || i == 0)
			n++;
		i++;
	}
	if (n % 2 == 0)
		n = n / 4;
	else 
		n = (n + 1) / 4;
	return (n);
}

char	**alloc(int size)
{
	int i;
	char **tab;

	i = 0;
	tab = (char **) malloc(sizeof(char) * (size - 1));
	while (i < size)
	{
		tab[i] = (char *) malloc(sizeof(char) * (size - 1));
		i++;
	}
	return(tab);
}

char	*fillit(int size, char *str, int y)
{
	int i;
	int x;
	char *ret;

	i = 0;
	x = (size * 2)*y;
	ret = (char *) malloc(sizeof(char) * size - 1);
	while (i < (size * 2))
	{
		if ((i % 2) == 0)
			ret[i] = str[i + x];
		i++;
	}
	return (ret);
}

char    **parse_input(char *str)
{
       	int size;
        int y;
	char **tabin;
	
	size = do_size(str);
	y = 0;
	tabin = alloc(size);
	while (y < 4)
	{
		tabin[y] = fillit(size, str, y);
		y++;
	}
        return(tabin);
}

