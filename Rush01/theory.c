/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvreu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:02:42 by jcouvreu          #+#    #+#             */
/*   Updated: 2022/07/17 10:58:46 by jrenault         ###   ########lyon.fr   */
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
}
