/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maderuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:33:46 by maderuel          #+#    #+#             */
/*   Updated: 2022/09/24 16:05:07 by maderuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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


char *ft_resolve(char *argv)
{
	char *coord;
	int i;
	char *str;
	
	coord = "1,1";
	i = 0;
	str[0] = '0';
	while ( i < 8)
	{
		if (ft_row_ok(str[i],str,0) == 1)
			i += 2;

		str[i] = '0';
		
	}


}
