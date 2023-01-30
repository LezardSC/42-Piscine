/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:03:04 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/26 13:53:44 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tools.h"
#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096

char	read_map(char *mapfile)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	char	*temp;

	fd = open(mapfile, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return ('1');
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return ('1');
	}
	temp = buf;
	return (*temp);
}

void	display_tab(char *mapfile)
{
	int		line;
	int		row;
	char	*b;
	char	tab[10][10];

	line = 0;
	row = 0;
	*b = read_map(mapfile);
	while (tab[row])
	{
		while (tab[row][line])
		{
			tab[row][line] = b[line];
			line++;
		}
		row++;
	}
	printf("%c", tab[2][4]);
}
