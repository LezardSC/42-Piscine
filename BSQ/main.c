/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:29:52 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/26 13:32:12 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "tools.h"
#include "read_map.h"
#include "check_error.h"

int	main(int argc, char **argv)
{
	int		i;
	char	map_file[50];

	i = 0;
	while (argv[1][i] != '\0')
	{
		map_file[i] = argv[1][i];
		i++;
	}
	if (check_error(argc, argv) == 1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	display_tab(map_file);
	return (0);
}
