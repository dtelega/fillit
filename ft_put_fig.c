/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 15:11:47 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/12 18:45:58 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_put_fig(char *f, char *figures, int index_fig, char fig)
{
	int		k;
	int		size;

	if (index_fig >= len(figures))
		return (f);
	size = ft_size(f);
	if (fig != '\0' && index_fig > 0)
	{
		f = ft_clear_letter(f, index_fig + 65);
		k = ft_li(f, index_fig - 1 + 65) + 1;
		f = ft_clear_letter(f, index_fig - 1 + 65);
		f = ft_write(f, figures, index_fig - 1, k);
	}
	else if (fig == '\0' && index_fig < len(figures))
	{
		index_fig++;
		f = ft_write(f, figures, index_fig, 0);
	}
	else if (fig != '\0' && index_fig == 0)
		f = ft_creator(f, figures, ++size);
	return (f);
}

char	*ft_write(char *f, char *figures, int index_fig, int k)
{
	int		i;
	int		tmp;
	int		size;
	char	*fig;

	i = 0;
	tmp = k;
	fig = ft_database((int)(figures[index_fig]) - 17 - '0');
	if (index_fig >= len(figures) || !(size = ft_size(f)))
		return (f);
	while (fig[i] && f[i + k])
	{
		if (fig[i] == '#' && f[i + k] == '.')
			f[i + k] = index_fig + 65;
		else if (fig[i] != '#' && fig[i] != '\0')
			k += size - ((int)fig[i] - '0') - 1;
		else if (f[i + k] != '.' && f[i + k] != '\0' && fig[i] == '#')
		{
			i = -1;
			k = ++tmp;
			f = ft_clear_letter(f, index_fig + 65);
		}
		i++;
	}
	return (f = ft_put_fig(f, figures, index_fig, fig[i]));
}

int		len(char *figures)
{
	int i;

	i = 0;
	while (figures[i])
		i++;
	return (i);
}

int		ft_li(char *finish_map, char letter)
{
	int i;

	i = 0;
	while (finish_map[i] != letter)
		i++;
	return (i);
}

char	*ft_clear_letter(char *finish_map, char letter)
{
	int		i;

	i = 0;
	while (finish_map[i])
	{
		if (finish_map[i] == letter)
			finish_map[i] = '.';
		i++;
	}
	return (finish_map);
}
