# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkrug <fkrug@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 12:10:31 by fkrug             #+#    #+#              #
#    Updated: 2023/04/21 11:53:03 by fkrug            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

#SRC = ft_printf.c ft_xtoa_l_print.c ft_xtoa_u_print.c\
	ft_putchar_print.c ft_strlen.c ft_putstr_print.c ft_putnbr_print.c\
	 ft_putptr_print.c
SRC = ft_printf.c ft_printf_utils_chr.c ft_printf_utils_nbr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	ar rcs $(NAME) $(OBJ)


test:
	@$(CC) -o a.out test.c -L. -lftprintf
	@./a.out

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all