/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:50:58 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/26 21:59:12 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	stock;

	x = 0;
	y = size - 1;
	stock = 0;
	while (x < (size + 1) / 2)
	{	
		stock = tab[x];
		tab[x] = tab[y];
		tab[y] = stock;
		x++;
		y--;
	}
}
