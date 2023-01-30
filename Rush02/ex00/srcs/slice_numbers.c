/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarenc <afarenc@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:59:07 by afarenc           #+#    #+#             */
/*   Updated: 2022/07/23 19:50:00 by afarenc          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../includes/slice_numbers.h"
#include <stdio.h>
int	ft_read_number_lines(char *file_name)
{
	int		nb_line;
	int		file;
	int		i;
	char	buff[4096];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (-1);
	i = 0;
	nb_line = 0;
	while (buff[i] != 0)
	{
		read(file, buff, 4096);
		if (buff[i] == '\n')
			nb_line++;
		i++;
	}		
	if (close(file) == -1)
		return (-1);
	return (nb_line);
}

void	ft_read_alloc_keys(char **keys_tab, char *buff)
{
	int	j;
	int	size;
	int	i;
	int	is_read;

	j = 0;
	i = 0;
	is_read = 1;
	while (buff[i] != 0)
	{
		if (is_read)
		{
			size = 0;
			while (buff[i++] != ':' && buff[i] != '\0')
				size++;
			keys_tab[j] = malloc(sizeof(char) * size + 1);
			j++;
			is_read = 0;
		}
		if (buff[i] == '\n')
			is_read = 1;
		i++;
	}
}

char	**ft_alloc_tab_keys(char *file_name)
{
	char	**keys_tab;
	int		file;
	char	buff[4096];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	keys_tab = malloc(sizeof(char *) * ft_read_number_lines(file_name));
	read(file, buff, 4095);
	ft_read_alloc_keys(keys_tab, buff);
	if (close(file) == -1)
		return (NULL);
	return (keys_tab);
}

void	ft_read_alloc_str(char **keys_tab, char *buff)
{
	int	j;
	int	size;
	int	i;
	int	is_read;

	j = 0;
	i = 0;
	is_read = 0;
	while (buff[i] != 0)
	{
		if (is_read)
		{
			size = 0;
			while (buff[i++] != '\n' && buff[i] != '\0')
				size++;
			keys_tab[j] = malloc(sizeof(char) * size + 1);
			j++;
			is_read = 0;
		}
		if (buff[i] == ':')
			is_read = 1;
		i++;
	}
}

char	**ft_alloc_tab_keys(char *file_name)
{
	char	**keys_tab;
	int		file;
	char	buff[4096];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	keys_tab = malloc(sizeof(char *) * ft_read_number_lines(file_name));
	read(file, buff, 4095);
	ft_read_alloc_str(keys_tab, buff);
	if (close(file) == -1)
		return (NULL);
	return (keys_tab);
}
