/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:22:16 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/16 17:18:47 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


// Fonction pour placer un nombre
int	IsSafe(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	// On regarde si on a le meme numero dans la colonne
	while (i <= 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	i = 0;
	//On regarde si on a le meme numero dans la ligne
	while (i <= 4)
	{
		if (grid[row][i] == num)
			return(0);
		i++;
	}
return (1);
}

int	solve_skyscrapper(int grid[4][4], int row, int col)
{
	int	x;
	int	y;
	int	bool_solve;

	x = 0;
	y = 0;
	//bool_solve servira de booleen, si il vaut 1, le programme fonctionne.
    bool_solve = 0;

	if (row == 4 - 1 && col == 4 - 1)
		return (1);

	if (col == 4 - 1)
	{
		row++;
		col = 0;
	}

	if (grid[row][col] > 0)
		return solve_skyscrapper(grid, row, col + 1);

	int	num;
	
	num = 1;
	while (num <= 4)
	{
		if (IsSafe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
		}
		if (IsSafe(grid, row, col + 1) == 1)
			return(1);
		
		col++;
		num++;
	}
	// Si le probleme n'a pas de solutions, affiche un message d'erreur.
	if (bool_solve == 0)
		write(1, "Error\n", 6);


return (0);
}



int main()
{
	int	grid[4][4];
	int i;
	int j;
//	int k;
	int	row;
	int col;
//	(void) argc;
//	(void) argv;

// array display

	row = 0;
	col = 0;
	
	solve_skyscrapper(grid, row, col);


	i = 0;
	j = 0;
	while (i >= 0 && i < 4)
	{
		j = 0;
		while (j >= 0 && j < 4)
		{
			write(1, &grid[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
