/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 13:29:09 by dtelega           #+#    #+#             */
/*   Updated: 2017/01/15 12:27:46 by dtelega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

char		*ft_read(char *field, int i, int k);
int			ft_sl(char *sl);
void		ft_putstr(char *s);
int			ft_strlen(const char *s);
int			ft_fail(char *str);
char		ft_figure(char *str);
char		ft_figure1(char *str, int i);
char		*ft_creator(char *finish_map, char *figures, int size);
char		*ft_clear(char *finish_map, int size);
int			ft_sqr(int nb);
char		*ft_database(int i);
char		*ft_put_fig(char *f, char *figures, int index_fig, char fig);
char		*ft_clear_letter(char *finish_map, char letter);
char		*ft_fig(char *s);
int			ft_size(char *finish_map);
int			ft_li(char *finish_map, char letter);
int			len(char *figures);
char		*ft_write(char *f, char *figures, int index_fig, int k);

#endif
