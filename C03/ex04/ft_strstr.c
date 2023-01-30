/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:54:44 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 23:30:36 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (str[i] && j < size)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		i++;
	}
	if (!(to_find[0]))
		return (str);
	if (j == size)
		return (&str[i - 1]);
	return (0);
}
