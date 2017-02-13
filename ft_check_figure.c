/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_figure.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:21:12 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/12 14:30:33 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		ft_figure(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '#')
		i++;
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
		return ('A');
	else if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
		return ('B');
	else if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
		return ('C');
	else if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 9] == '#')
		return ('D');
	else if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		return ('E');
	else if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		return ('F');
	else if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		return ('G');
	else if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		return ('H');
	else if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
		return ('I');
	else
		return (ft_figure1(str, i));
}

char		ft_figure1(char *str, int i)
{
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
		return ('J');
	else if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		return ('K');
	else if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		return ('L');
	else if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
		return ('M');
	else if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		return ('N');
	else if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
		return ('O');
	else if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		return ('P');
	else if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		return ('Q');
	else if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		return ('R');
	else if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
		return ('S');
	else
		return (0);
}
