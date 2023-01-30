/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:27:02 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 22:26:12 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] >= 0 && str[i - 1] <= 47)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 123 && str[i - 1] <= 127)))
			str[i] -= 32;
			i++;
	}
	return (str);
}
