/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1test2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:47:06 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/17 12:03:50 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
 
// N is the size of the 2D matrix   N*N

#define N 4
 
/* A utility function to print grid */
void print(int arr[N][N])
{
	int i;
	int	j;
	char c;
	
	c = '0';

	i = 0;
     while (i < N)
      {
		 j = 0;
         while (j < N)
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
int isSafe(int grid[N][N], int row, 
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
int Solve_Skyscrapper(int grid[N][N], int row, int col)
{
     
    // Check if we have reached the 8th row 
    // and 9th column (0
    // indexed matrix) , we are 
    // returning true to avoid
    // further backtracking
    if (row == N - 1 && col == N)
        return 1;
 
    //  Check if column value  becomes 9 ,
    //  we move to next row and
    //  column start from 0
    if (col == N) 
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
    while (num <= N) 
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
 
int main()
{
    // 0 means unassigned cells
    int grid[N][N] = { { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 } };
 
    if (Solve_Skyscrapper(grid, 0, 0)==1)
        print(grid);
    else
		write(1, "Error\n", 6);
 
    return 0;
    // This is code is contributed by Pradeep Mondal P
}
