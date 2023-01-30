/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:13:59 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 11:13:30 by jrenault         ###   ########lyon.fr   */
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
