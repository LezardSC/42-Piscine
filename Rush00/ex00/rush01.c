/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:49:52 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/10 13:59:02 by jrenault         ###   ########lyon.fr   */
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
		ft_putchar('/');
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
	char	backslash;
	int		i;

	i = 1;
	backslash = 92;
	ft_putchar('/');
	while (i <= x - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar(backslash);
}

void	ligne_verticale(int y)
{
	int		i;
	char	back_slash;

	back_slash = 92;
	i = 1;
	ft_putchar('/');
	while (i <= y - 2)
	{
		ft_putchar('\n');
		ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
	ft_putchar(back_slash);
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
		ft_putchar('*');
		i = 1;
		while (i <= x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
		j++;
	}
	ft_putchar('\n');
	ligne_du_bas(x);
}

void	ligne_du_bas(int x)
{
	int		i;
	char	backslash;

	i = 1;
	backslash = 92;
	ft_putchar(backslash);
	while (i <= x - 2)
	{
		ft_putchar('*');
		i++;
	}	
	ft_putchar('/');
}
