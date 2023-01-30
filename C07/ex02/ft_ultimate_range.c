/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:49:58 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 18:56:09 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	range[0] = malloc((max - min) * sizeof(int *));
	if (range[0] == NULL)
		return (0);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
