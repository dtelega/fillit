/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:59:41 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/15 15:05:55 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*figures;
	int		size;
	int		hesh;
	char	*finish_map;

	if (ac != 2)
	{
		write(1, "usage: ./fillit [input_file]\n", 29);
		return (1);
	}
	if ((figures = ft_read(av[1], 0, 0)) == 0 || ft_sl(av[1]) == 0)
	{
		write(1, "error\n", 6);
		return (1);
	}
	hesh = ft_strlen(figures) * 4;
	size = 0;
	while (ft_sqr(size) < hesh)
		size++;
	finish_map = NULL;
	finish_map = ft_creator(finish_map, figures, size);
	ft_putstr(finish_map);
	return (0);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int		ft_sl(char *sl)
{
	int		i;
	int		fd;
	char	*map;
	char	c;

	if (!(fd = open(sl, O_RDONLY)) ||
		!(map = (char *)malloc(546 * sizeof(map))))
		return (0);
	i = 0;
	while (read(fd, &c, 1))
		map[i++] = c;
	map[i] = '\0';
	if (map[i - 1] != '\n' || (map[i - 2] != '.' && map[i - 2] != '#'))
		return (0);
	close(fd);
	return (1);
}
