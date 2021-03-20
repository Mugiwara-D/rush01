#include   <unistd.h>


void    print_matrice(char *tab, int size, int map);
void    ft_putchar(char c);

int main(void)
{   
    int map = 4;
    char *tab = "1234567891234567";
    int size = map*map;
    

    print_matrice(tab,size,map);
    return (0);    
}

void    print_matrice(char *tab, int size, int map)
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
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
char    ft_mapping(char *tab, int size, int map)
{
    int i = 0;
    while (i <= size)
        if (ft_verif() == 1)
        {
            tab = ft_resolve();
            i++;
        }
        else
            backtrack() 


}
int verif(char *input,  char *tab, int map)
{
    int n;
    n = 1;
    while (n <= map)
    {
        if (input = map)
            *tab[n] = '1';
        else if (input = '1' && n > 1)
            *tab[n] = '4';
        else if (n > 1 && n < map );
            resolve()

    }

}

int     backtrack(int *tab, )
{

}

int     resolve(int *tab,int *n,int *x, int *y)
{
    
}*/