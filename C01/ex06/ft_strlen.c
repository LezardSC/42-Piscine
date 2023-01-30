/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:07:28 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/12 11:46:32 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
