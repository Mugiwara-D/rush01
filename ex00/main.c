/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:27:24 by larmenou          #+#    #+#             */
/*   Updated: 2022/09/24 11:27:27 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	verif_argv(char*str, int len)
{
	int	i;

	i = 0;
	if (len == 31)
	{
		while (i < len)
		{
			if (!(i % 2))
			{	
				if (str[i] < '0' || str[i] > '5')
					return (0);
			}
			else
			{
				if (str[i] != ' ')
					return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

/*
 	c1u	c2u c3u c4u c1d c2d c3d c4d r1l r2l r3l r4l r1r r2r r3r r4r
str 0 	2	4	6	8	10	12	14	16	18	20	22	24	26	28	30 
*/

int	verif_duo(char*str, int start, int end)
{
	int	i;

	i = start;
	while (i + 8 < end)
	{
		if (str[i] != '2' && str[i] == str[i + 8])
			return (0);
		else if (str[i] == '4' && str[i + 8] == '3')
			return (0);
		else if (str[i] == '3' && str[i + 8] == '4')
			return (0);
		else if (str[i] == '4' && str[i + 8] == '2')
			return (0);
		else if (str[i] == '2' && str[i + 8] == '4')
			return (0);
		else
			i += 2;
	}
	return (1);
}

int	main(int argc, char*argv[])
{
	int	len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		if (!verif_argv(argv[1], len))
			write(1, "Error\n", 6);
		if (!(verif_duo(argv[1], 0, 16) && verif_duo(argv[1], 16, 31)))
			write(1, "Error\n", 6);
		// Rajouter fill
		// rajouter display
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
