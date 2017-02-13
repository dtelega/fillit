#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtelega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/12 13:36:09 by dtelega           #+#    #+#              #
#    Updated: 2017/01/15 16:43:03 by dtelega          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRC = main.c ft_read.c ft_check_fail.c ft_check_figure.c ft_creator.c ft_database.c ft_put_fig.c ft_sqr.c ft_strlen.c

OB = $(SRC:.c=.o)

IN = fillit.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@gcc $(FLAGS) -I $(IN) -c $< -o $@

$(NAME): $(OB)
	@gcc $(FLAGS) -o $(NAME) $(OB)

clean:
	@rm -rf $(OB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all