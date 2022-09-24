#include <unistd.h>
#include <stdlib.h>
void	ft_putc(char c)
{
	write(1, &c, 1);
}
void	print_tab(char **tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < (size/2))
 	{
		while(x < size)
		{
			ft_putc(tab[y][x]);
			x++;
		}
		ft_putc('\n');
		x = 0;
		y++;
	}
	free (tab);
}
