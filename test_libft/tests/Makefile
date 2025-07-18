# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 13:05:46 by lsarraci          #+#    #+#              #
#    Updated: 2025/07/18 17:56:47 by lsarraci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TESTFILE	= tests_libft.c
TESTPROGRAM = libft_tests
LIBDIR		= ../libft/
TESTDIR		= ../tests/
NAME		= libft.a
OBJ			= $(SRC:.c=.o)
RF 			= rm -f

all: 
	$(MAKE) -C $(LIBDIR)
	@cc -o $(TESTPROGRAM) -I . -I$(LIBDIR) $(TESTFILE) -L$(LIBDIR) -lft

test: fclean
	$(MAKE) re -C $(LIBDIR) 
	@cc -o $(TESTPROGRAM) -I . -I$(LIBDIR) $(TESTFILE) -L$(LIBDIR) -lft
	@./$(TESTPROGRAM)

leakfull:	test
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./$(TESTPROGRAM)
	
clean: $(OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	$(RF) $(TESTPROGRAM)

.PHONY:
	test clean fclean re
