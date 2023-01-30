/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:06:19 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/10 19:48:33 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negaflash(int nb)
{
	if (nb < 0)
		ft_putchar('-');
}

void	looser(int nb)
{
	if (nb == 0)
		ft_putchar(48);
}

void	ft_putnbr(int nb)
{	
	long int	diviseur;
	int			temp_nb;

	diviseur = 1;
	temp_nb = 1;
	looser(nb);
	negaflash(nb);
	if (nb < 0)
		diviseur *= -1;
	while (temp_nb != 0)
	{
		temp_nb = nb / diviseur;
		diviseur = diviseur * 10;
	}
	diviseur = diviseur / 100;
	while (diviseur != 0)
	{
		temp_nb = nb / diviseur;
		ft_putchar(temp_nb + 48);
		nb = nb - temp_nb * diviseur;
		diviseur = diviseur / 10;
	}
}
