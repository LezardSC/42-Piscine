/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmerge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:00:45 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/17 12:03:53 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	arg_check(char up[4], char down[4], char left[4], char right[4])
{
	int i;
// checking if arguments of a same line/column are equal, except for 2/2
	i = 0;
	while (up[i] != '\0')
	{
		if (up[i] == down[i])
		{
			if (up[i] == 2 && down[i] == 2)
				return (1);
			else
				return (0);
		}

	}
	i = 0;
	while (left[i] != '\0')
	{
		if (left[i] == right[i])
		{
			if (left[i] == 2 && right[i] == 2)
				return (1);
			else
				return (0);
		}
	}
// checking if corners arguments aren't contradictory (ex: 4/1)
	if ((up[3] == 1 && right[0] == 1) || (up[3] == 3 && right[0] == 2) ||
		(up[3] == 3 && right[0] == 3) || (up[3] == 2 && right[0] == 2) ||
		(up[3] == 2 && right[0] == 4) || (up[3] == 3 && right[0] == 4) ||
		(up[3] == 4 && right[0] == 4) || (up[3] == 2 && right[0] == 3) ||
		(up[3] == 4 && right[0] == 2) || (up[3] == 4 && right[0] == 3))
		{
			if ((right[3] == 1 && down[3] == 1) || (right[3] == 3 && down[3] == 2) ||
				(right[3] == 3 && down[3] == 3) || (right[3] == 2 && down[3] == 2) ||
				(right[3] == 2 && down[3] == 4) || (right[3] == 3 && down[3] == 4) ||
				(right[3] == 4 && down[3] == 4) || (right[3] == 2 && down[3] == 3) ||
				(right[3] == 4 && down[3] == 2) || (right[3] == 4 && down[3] == 3))
				{
					if ((left[3] == 1 && down[0] == 1) || (left[3] == 3 && down[0] == 2) ||
						(left[3] == 3 && down[0] == 3) || (left[3] == 2 && down[0] == 2) ||
						(left[3] == 2 && down[0] == 4) || (left[3] == 3 && down[0] == 4) ||
						(left[3] == 4 && down[0] == 4) || (left[3] == 2 && down[0] == 3) ||
						(left[3] == 4 && down[0] == 2) || (left[3] == 4 && down[0] == 3))

						{
							if ((up[0] == 1 && left[0] == 1) || (up[0] == 3 && left[0] == 2) ||
								(up[0] == 3 && left[0] == 3) || (up[0] == 2 && left[0] == 2) ||
								(up[0] == 2 && left[0] == 4) || (up[0] == 3 && left[0] == 4) ||
								(up[0] == 4 && left[0] == 4) || (up[0] == 2 && left[0] == 3) ||
								(up[0] == 4 && left[0] == 2) || (up[0] == 4 && left[0] == 3))
									return (1);
						}
				}
		}
	else
		return (0);
	return(0);
}

int	border_checks(char up[4], char down[4], char left[4], char right[4])
{
// checking if a border value isnt occuring more than 2 times
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (up[4] != '\0')
	{
		j = i + 1;
		while (up[j] != '\0')
		{
			if (up[i] == up[j])
				k++;
			j++;
		}
		i++;
	}
	if (k >= 2)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (down[4] != '\0')
	{
		j = i + 1;
		while (down[j] != '\0')
		{
			if (down[i] == down[j])
				k++;
			j++;
		}
		i++;
	}
	if (k >= 2)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (left[4] != '\0')
	{
		j = i + 1;
		while (left[j] != '\0')
		{
			if (left[i] == left[j])
				k++;
			j++;
		}
		i++;
	}
	if (k >= 2)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (right[4] != '\0')
	{
		j = i + 1;
		while (right[j] != '\0')
		{
			if (right[i] == right[j])
				k++;
			j++;
		}
		i++;
	}
	if (k >= 2)
		return (0);
	return (1);
}

/* A utility function to print grid */
void print(int arr[4][4])
{
	int i;
	int	j;
	char c;

	c = '0';

	i = 0;
     while (i < 4)
      {
		 j = 0;
         while (j < 4)
		 {
			c = arr[i][j] + '0';
  		    write(1,&c, 1);
			write(1," ", 1);
			j++;
		 }
		 write(1, "\n", 1);
		 i++;
       }
}

// Checks whether it will be legal
// to assign num to the
// given row, col
int isSafe(int grid[4][4], int row,
                       int col, int num)
{
    // Check if we find the same num
    // in the similar row , we return 0

	int	x;

	x = 0;
    while (x <= 3)
	{
        if (grid[row][x] == num)
            return 0;
		x++;
	}

    // Check if we find the same num in the
    // similar column , we return 0

	x = 0;
  	while (x <= 3)
	{
        if (grid[x][col] == num)
            return 0;
		x++;
	}
    return 1;
}

/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
int Solve_Skyscrapper(int grid[4][4], int row, int col)
{

    // Check if we have reached the 8th row
    // and 9th column (0
    // indexed matrix) , we are
    // returning true to avoid
    // further backtracking
    if (row == 4 - 1 && col == 4)
        return 1;

    //  Check if column value  becomes 9 ,
    //  we move to next row and
    //  column start from 0
    if (col == 4)
    {
        row++;
        col = 0;
    }

    // Check if the current position
    // of the grid already contains
    // value >0, we iterate for next column
    if (grid[row][col] > 0)
        return Solve_Skyscrapper(grid, row, col + 1);

	int num;

	num = 1;
    while (num <= 4)
    {

        // Check if it is safe to place
        // the num (1-9)  in the
        // given row ,col  ->we move to next column
        if (isSafe(grid, row, col, num)==1)
        {
            /* assigning the num in the
               current (row,col)
               position of the grid
               and assuming our assigned num
               in the position
               is correct     */
            grid[row][col] = num;

            //  Checking for next possibility with next
            //  column
            if (Solve_Skyscrapper(grid, row, col + 1)==1)
                return 1;
        }

        // Removing the assigned num ,
        // since our assumption
        // was wrong , and we go for next
        // assumption with
        // diff num value
        grid[row][col] = 0;
		num++;
    }
    return 0;
}


int	main(int argc, char **argv)
{
//	int grid[4][4];
	(void) argc;
	(void) argv;
	if (argc != 17)
		return (0);
/*	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4] */;

	char	up[3] = "argv[1], argv[2], argv[3], argv[4]";
	char	down[3] = "argv[5], argv[6], argv[7], argv[8]";
	char	left[3] = "argv[9], argv[10], argv[11], argv[12]";
	char	right[3] = "argv[13], argv[14], argv[15], argv[16]";

	if (&arg_check == 0)
		return (0);
	border_checks(&up[3], &down[3], &left[3], &right[3]);

    // 0 means unassigned cells
    int grid[4][4] = { { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 } };

    if (Solve_Skyscrapper(grid, 0, 0)==1)
        print(grid);
    else
		write(1, "Error\n", 6);

    return 0;
}
