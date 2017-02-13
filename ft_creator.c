/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 14:50:23 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/12 18:29:15 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_creator(char *finish_map, char *figures, int size)
{
	int		size_s;

	size_s = size * size + size;
	if (!(finish_map = (char *)malloc((size_s + 1) * sizeof(*finish_map))))
		return (0);
	finish_map[size_s--] = '\0';
	while (size_s >= 0)
		finish_map[size_s--] = '.';
	finish_map = ft_clear(finish_map, size);
	finish_map = ft_write(finish_map, figures, 0, 0);
	return (finish_map);
}

int		ft_size(char *finish_map)
{
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (finish_map[i] != '\n')
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_clear(char *finish_map, int size)
{
	int		i;
	int		count_n;

	i = 0;
	count_n = 0;
	while (finish_map[i] != '\0')
	{
		if (count_n == size)
		{
			finish_map[i] = '\n';
			count_n = -1;
		}
		i++;
		count_n++;
	}
	return (finish_map);
}
