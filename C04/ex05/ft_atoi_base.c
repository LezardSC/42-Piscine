/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:13:58 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/27 01:39:52 by jrenault         ###   ########lyon.fr   */
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

int	ft_index(char to_change, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_change == to_find[i])
			return (i);
		i++;
	}
	return (0);
}

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base [i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	base_size;

	i = 0;
	sign = 1;
	base_size = ft_strlen(base);
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		nb = nb * base_size + ft_index(str[i], base);
		i++;
	}
	nb *= sign;
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	if (check_error(base) == 0)
		return (0);
	return (ft_atoi(str, base));
}
