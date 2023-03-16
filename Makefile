# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 16:35:57 by fkrug             #+#    #+#              #
#    Updated: 2023/03/16 18:00:21 by fkrug            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = ft_*.c

all: $(NAME)

$(NAME):
#	gcc -o $(NAME) $(SRC)
	cc -Wall -Werror -Wextra -c $(SRC)
	ar -cr libft.a ft_*.o

clean:
	/bin/rm -f *.o

fclean: clean
#	/bin/rm -f $(NAME)
	/bin/rm -f libft.a

re: fclean all
test:
	cc -Wall -Wextra -Werror test.c -L. -lft
	./a.out