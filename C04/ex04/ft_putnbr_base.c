/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:34:27 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 23:47:00 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base [i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, char *base)
{
	long	lnbr;
	int		base_size;

	lnbr = nbr;
	base_size = ft_strlen(base);
	if (lnbr < 0)
	{
		lnbr *= -1;
		write(1, "-", 1);
	}
	if (lnbr > base_size)
		ft_putnbr(lnbr / base_size, base);
	write(1, &base[lnbr % base_size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_error(base) == 1)
		ft_putnbr(nbr, base);
}
