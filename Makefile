# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 16:35:57 by fkrug             #+#    #+#              #
#    Updated: 2023/03/28 14:14:43 by fkrug            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c	\
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c	\
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c	\
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c 		\
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c			\
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c 		\
		ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c		\
			ft_lstnew.c ft_lstsize.c
#ft_lstdelone.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME) bonus
#all: $(NAME)
$(NAME): $(SRC) $(OBJ)
#	gcc -o $(NAME) $(SRC)
#	cc -Wall -Werror -Wextra -c $(SRC) -o $(OBJ)
	ar rcs libft.a $(OBJ)

bonus: $(SRC_BONUS) $(OBJ_BONUS)
	ar rcs libft.a $(OBJ_BONUS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
#	/bin/rm -f libft.a

re: fclean all
#test:
#	cc -Wall -Wextra -Werror test.c -L. -lft
#	./a.out