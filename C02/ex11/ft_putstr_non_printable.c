/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:41:10 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 22:56:55 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	unsigned_hexa(unsigned char str)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[(str / 16)]);
	ft_putchar("0123456789abcdef"[(str % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			unsigned_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
