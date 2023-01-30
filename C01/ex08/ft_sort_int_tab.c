/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:16:09 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/26 21:59:05 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j <= size)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
				ft_swap(&tab[i - 1], &tab[i]);
			i++;
		}
		j++;
	}
}
