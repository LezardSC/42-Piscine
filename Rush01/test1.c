/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvreu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:29:46 by jcouvreu          #+#    #+#             */
/*   Updated: 2022/07/16 17:05:16 by jcouvreu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

/*int	fill_puzzle()
{

}*/

int main(int argc, char **argv)
{
	int	puzzle[4][4];
	int i;
	int j;
	int k;
	(void) argc;
	(void) argv;

// array display

	i = 0;
	j = 0;
	while (i >= 0 && i < 4)
	{
		j = 0;
		while (j >= 0 && j < 4)
		{
			write(1, puzzle[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
