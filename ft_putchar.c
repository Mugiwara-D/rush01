#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
 }


void    print_matrice(char *tab, char size, char map)
{
    int i;
    int y;
    
    i = 0;
    y = 0;
    while (i < size)
    {
        ft_putchar(tab[i]);
        if (y == (map - 1))
        {
            ft_putchar('\n');
            y = 0;
        }
        else
        {
            ft_putchar(' ');
            y++;
        }
        i++;
    }
    
}