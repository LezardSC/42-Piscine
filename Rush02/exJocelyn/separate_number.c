/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:37:37 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/24 17:41:25 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_separate_number(char *nb)
{
	char	h[4];
	char	d[3];
	char	u;

	h[0] = nb[0];
	d[0] = nb[1];
	u = nb[2];
	printf("centaine : %s\ndizaine : %s\nunite : %c\n", h, d, u);
	h[1] = '0';
	h[2] = '0';
	d[1] = '0';
	printf("centaine : %s\ndizaine : %s\nunite : %c\n", h, d, u);
}

int	main(void)
{
	char	nb[3] = "124";

	ft_separate_number(nb);
	return (0);
}
