/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:47:34 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 18:18:37 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;
	int	mod;

	div = 2;
	mod = 1;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	while (div <= nb / div)
	{
		mod = nb % div;
		if (mod == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (i != 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
