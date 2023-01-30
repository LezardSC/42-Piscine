/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:51:57 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 18:23:23 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbtemp;

	i = 0;
	nbtemp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
		nb = nb * nbtemp;
	return (nb);
}
