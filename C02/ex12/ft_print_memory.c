/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:08:22 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 04:37:32 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_sentence(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		if (l == 16)
		{
			ft_putchar('\n');
			l = 0;
		}
		if (str[i] >= 0 && str[i] <= 31)
				str[i] = '.';
		ft_putchar(str[i]);
		i++;
		l++;
	}
}

void	ft_print_hexa_sentence(char *str)
{
	int	i;
	int	l;
	int	s;

	i = 0;
	l = 0;
	s = 0;
	while (str[i] != '\0')
	{
		if (s == 2)
		{
			ft_putchar(' ');
			s = 0;
		}
		if (l == 16)
		{
			ft_putchar('\n');
			l = 0;
		}
		ft_putchar("0123456789abcdef"[str[i] / 16]);
		ft_putchar("0123456789abcdef"[str[i] % 16]);
		i++;
		l++;
		s++;
	}
}

void	ft_print_hexa_address(char	*addr)
{
	int	i;

	i = 7;
	while (i >= -1)
	{	
		ft_putchar("0123456789abcdefg"[addr[i] / 16]);
		ft_putchar("0123456789abcdefg"[addr[i] % 16]);
		i--;
	}
}

void	*ft_print_memory(void	*addr, unsigned int size)
{	
	char	*char_addr;
	char	*address_char;

	char_addr = addr;
	address_char = (char *)&char_addr;
	ft_print_hexa_address(address_char);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_hexa_sentence(addr);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_sentence(addr);
	(void) size;
	return (0);
}
