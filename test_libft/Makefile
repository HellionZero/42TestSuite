# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 11:40:06 by lsarraci          #+#    #+#              #
#    Updated: 2025/07/17 17:21:23 by lsarraci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FOLDER = src

LIBFT_FOLDER = libft

S_LIB = libft.a

NAME = programa_de_testes

MAIN = ft_test.c

CC = gcc

RF = -rm -f

CFLAGS = -Werror -Wall -Wextra

RM = -rm -f

all: 
	$(MAKE) -C $(LIBFT_FOLDER)

test: all
	$(CC) $(CFLAGS) $(MAIN) -L$(LIBFT_FOLDER) -l:$(S_LIB) -lm -lrt -o $(NAME) 
	./$(NAME)

clean:
	$(MAKE) -C $(LIBFT_FOLDER) clean
	
fclean: clean
		$(MAKE) -C $(LIBFT_FOLDER) fclean
		$(RF) $(NAME)

re: fclean
	all

.PHONY:
	all test clean fclean re
		
