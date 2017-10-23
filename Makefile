# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/23 11:36:43 by tmwalo            #+#    #+#              #
#    Updated: 2017/06/23 12:00:04 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

ENAME = gnleh

SRC = main.c get_next_line.c

ERR = gnl_error_handling.c

OBJ = main.o get_next_line.o

ERROBJ = gnl_error_handling.o

DEPS = get_next_line.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(DEPS)
	gcc $(FLAGS) -I libft/includes -o get_next_line.o -c get_next_line.c
	gcc $(FLAGS) -I libft/includes -o main.o -c main.c
	gcc -o gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

gnleh: $(SRC) $(DEPS)
	gcc $(FLAGS) -I libft/includes -o get_next_line.o -c get_next_line.c
	gcc $(FLAGS) -I libft/includes -o gnl_error_handling.o -c gnl_error_handling.c
	gcc -o gnleh gnl_error_handling.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(ERROBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(ENAME)

re: fclean all
