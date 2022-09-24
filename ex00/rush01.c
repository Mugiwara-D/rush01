/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 08:43:44 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/24 13:16:25 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 	c1u	c2u c3u c4u c1d c2d c3d c4d r1l r2l r3l r4l r1r r2r r3r r4r
str 0 	2	4	6	8	10	12	14	16	18	20	22	24	26	28	30 */

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

int	ft_row_ok(char c, char **tab, int row)
{
	int i;

	i = 0;
	while(i < 8 && tab[row][i])
	{
		if (c == tab[row][i])
			return (0);
		i = i + 2;
	}
	return (1);
}

char ft_test(char c, char **tab, int row, int col)
{
	
	if ((ft_row_ok(c, tab, row) == 0 || ft_col_ok(c, tab, row) == 0))
		{
			if (c < '4')
				{
					c = c + 1;
					ft_test(c , tab, row, col);
				}
			else
				c = '5';	
		}
	else if (ft_row_ok(c, tab, row) && ft_col_ok(c, tab, row))
		return (c);
	return (c);
}

char *ft_fill_raw(char *str, char **tab);
{
	if (ft
}

char **ft_map(char *str)
{
	int i;
	int col;
	int	row;

	i = 0;
	col = 0;
	row = 0;
	while (col < 8) // ou str[i] ?
	{
		while (row < 8)
		{
			if (str[i] = 4)
			{
				tab[i][tab] = '1';
				tab[i][tab] = '1';
				tab[i][tab] = '1';
				tab[i][tab] = '1';
			}

		}
	}
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
