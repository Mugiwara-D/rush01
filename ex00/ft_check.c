/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maderuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:04:43 by maderuel          #+#    #+#             */
/*   Updated: 2022/09/24 14:39:18 by maderuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int	ft_check(int size, char *inp)
{
	int i;
	int x;
	int	y;
	char **input;
	
	i = 0;
	x = 0;
	y = 0;
	input = (char **)malloc(sizeof(char*) * 16)
	while (inp[i])
	{
		input[x][y] = inp[i];
		if (((i + 1) / 4) == 1 )
			x++;
		y++;
		i++;
	}
	printf("%s\n%s\n%s\n%s",input[0],input[1],input[2],input[3]);
	return 0;
}
