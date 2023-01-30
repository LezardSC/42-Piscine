/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_Error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:44:04 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/23 23:34:15 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
	{
		char_count++;
	}
	return (char_count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	check_error(int argc, char **argv)
{
	int		i;
	int		j;
	char	unsigned_int[10];

	unsigned_int[30] = "4294967295";
	i = 0;
	if (argc > 2)
		j = 1;
	else
		j = 2;
	while (argv[j][i])
	{
		if (!(argv[j][i] >= '0' && argv[j][i] <= '9') || argc > 3)
			return (1);
		if (ft_strlen(argv[j]) > 10)
			return (1);
		else if (ft_strlen(argv[j]) == 10)
		{
			if (ft_strcmp(argv[j], unsigned_int) == 1)
				return (1);
		}
		i++;
	}
	return (0);
}

int	check_dict_error(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	return (0);
}

int	main(int argc, char **argv)
{
	if (check_error(argc, argv) == 1)
	{
		ft_putchar("Error\n");
		return (0);
	}
	if (check_error(argc, argv) == 1)
	{
		ft_putchar("Dict Error\n");
		return (0);
	}
	return (0);
}
