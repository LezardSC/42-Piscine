/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:09:01 by jrenault          #+#    #+#             */
/*   Updated: 2022/07/28 13:00:10 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE -1
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments"
# define ODD_MSG "I have an odd number of arguments"
# define EVEN (nbr % 2 == 0)

typedef int	t_bool;
#endif