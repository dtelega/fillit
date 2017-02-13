/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_database.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:46:12 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/12 19:03:11 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_database(int i)
{
	char	**database;

	if (!(database = (char **)malloc(20 * sizeof(*database))))
		return (0);
	database[0] = "####\0\0\0\0";
	database[1] = "#0#0#0#\0";
	database[2] = "#0#0##\0\0";
	database[3] = "#0#1##\0\0";
	database[4] = "#2###\0\0\0";
	database[5] = "#0###\0\0\0";
	database[6] = "##0#0#\0\0";
	database[7] = "##1#0#\0\0";
	database[8] = "###2#\0\0\0";
	database[9] = "###0#\0\0\0";
	database[10] = "##1##\0\0\0";
	database[11] = "#1###\0\0\0";
	database[12] = "#0##1#\0\0";
	database[13] = "#1##0#\0\0";
	database[14] = "###1#\0\0\0";
	database[15] = "##2##\0\0\0";
	database[16] = "#0##0#\0\0";
	database[17] = "##0##\0\0\0";
	database[18] = "#1##1#\0\0\0";
	database[19] = NULL;
	return (database[i]);
}
