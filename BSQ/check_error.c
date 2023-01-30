/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:44:56 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/25 19:14:29 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	check_error(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
    /*
	if (argc > 4 || argc < 3)
		return (1);
	while (argv[j])
	{
		while (argv[j][i])
		{
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				return (1);
			i++;
		}
		j++;
	}
    */
    return (0);
}
