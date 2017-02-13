/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 15:53:52 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/12 14:30:44 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fail(char *str)
{
	int		i;
	int		hesh;
	int		dot;
	int		count_n;

	i = 0;
	hesh = 0;
	dot = 0;
	count_n = 0;
	while (str[i])
	{
		if (str[i] == '.')
			dot++;
		else if (str[i] == '#')
			hesh++;
		if (count_n == 4 && str[i] != '\n')
			return (1);
		else if (count_n == 4)
			count_n = -1;
		i++;
		count_n++;
	}
	if (hesh != 4 || dot != 12)
		return (1);
	return (0);
}
