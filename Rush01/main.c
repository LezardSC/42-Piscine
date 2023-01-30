/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:57:56 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/17 11:12:05 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int grid[4][4];
	(void) argc;
	(void) argv;
	if (argc != 17)
		return (0);
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];

	up[3] = "argv[1], argv[2], argv[3], argv[4]";
	down[3] = "argv[5], argv[6], argv[7], argv[8]";
	left[3] = "argv[9], argv[10], argv[11], argv[12]";
	right[3] = "argv[13], argv[14], argv[15], argv[16]";

	if (&arg_check == 0)
		return (0);
	border_checks(&up[3], &down[3], &left[3], &right[3]);

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
