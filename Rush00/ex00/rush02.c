/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aveau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:10:58 by aveau             #+#    #+#             */
/*   Updated: 2022/07/10 12:18:36 by aveau            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ligne_horizontale(int x);
void	ligne_verticale(int y);
void	rectangle(int x, int y);
void	ligne_du_bas(int x);

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
		ft_putchar('A');
	else if (y == 1)
		ligne_horizontale(x);
	else if (x == 1)
		ligne_verticale(y);
	else
		rectangle(x, y);
	ft_putchar('\n');
}

void	ligne_horizontale(int x)
{
	int		i;

	i = 1;
	ft_putchar('A');
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
}

void	ligne_verticale(int y)
{
	int		i;

	i = 1;
	ft_putchar('A');
	while (i <= y - 2)
	{
		ft_putchar('\n');
		ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
	ft_putchar('C');
}

void	rectangle(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	ligne_horizontale(x);
	while (j <= y - 2)
	{
		ft_putchar('\n');
		ft_putchar('B');
		i = 1;
		while (i <= x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		j++;
	}
	ft_putchar('\n');
	ligne_du_bas(x);
}

void	ligne_du_bas(int x)
{
	int		i;

	i = 1;
	ft_putchar('C');
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
}
