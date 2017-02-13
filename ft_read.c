/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 14:32:21 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/16 10:48:01 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *field, int i, int k)
{
	int		fd;
	char	c;
	char	*s;
	char	*fig;

	if (!(fd = open(field, O_RDONLY)) ||
		!(s = (char *)malloc(21 * sizeof(*s)))
		|| !(fig = (char *)malloc(27 * sizeof(*fig))))
		return (0);
	while (read(fd, &c, 1) && (s[i++] = c))
	{
		if (i == 20 && (read(fd, &c, 1) == '\0' || c == '\n'))
		{
			s[20] = '\0';
			if (ft_fail(s) == 1 || k > 25 || (fig[k++] = ft_figure(s)) == 0)
				return (0);
			i = 0;
		}
		else if (i == 20)
			return (0);
	}
	fig[k] = '\0';
	if (i != 0 || (close(fd) == -1))
		return (0);
	return (fig);
}
