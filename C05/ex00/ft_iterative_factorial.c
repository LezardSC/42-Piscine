/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:37:32 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 19:37:35 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (n == 0 || n == 1)
		return (1);
	while (i != n - 1)
	{
		nb = nb * (n - i);
		i++;
	}
	return (nb);
}
