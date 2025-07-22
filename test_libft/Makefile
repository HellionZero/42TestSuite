# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 11:40:06 by lsarraci          #+#    #+#              #
#    Updated: 2025/07/22 15:17:37 by lsarraci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_FOLDER = libft

TEST_FOLDER = tests

CC = gcc

CFLAGS = -Werror -Wall -Wextra

RF = rm -f

all: main

test:
	$(MAKE) -C $(TEST_FOLDER) test

leakfull: test
	$(MAKE) -C $(TEST_FOLDER) leakfull
	

main:
	$(MAKE) -C $(TEST_FOLDER)

clean:
	$(MAKE) -C $(TEST_FOLDER) clean

fclean: clean
	$(MAKE) -C $(TEST_FOLDER) fclean

.PHONY:
	all test leakfull main clean fclean
		
