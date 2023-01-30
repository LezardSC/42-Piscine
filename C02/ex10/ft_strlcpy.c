/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:04:01 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/26 22:45:30 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlenght(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lenght;

	lenght = ft_strlenght(src);
	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (lenght);
}
