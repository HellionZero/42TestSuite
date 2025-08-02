# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 13:05:46 by lsarraci          #+#    #+#              #
#    Updated: 2025/08/01 18:39:15 by lsarraci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TESTFILE	= tests_libft.c
TESTPROGRAM = printf_tests
LIBDIR		= ../ft_printf/
LIBFTDIR	= ../ft_printf/libft/
TESTDIR		= ../tests/
BIBNAME		= libprintf.a
OBJ			= $(SRC:.c=.o)
RF 			= rm -f

all: 
	$(MAKE) -C $(LIBDIR)
	@cc -o $(TESTPROGRAM) -I . -I$(LIBDIR) -I$(LIBFTDIR)$(TESTFILE) -L$(LIBDIR) -l:$(BIBNAME) -L$(LIBFTDIR) -lft

test: 
	$(MAKE) re -C $(LIBDIR) 
	@cc -o $(TESTPROGRAM) -I . -I$(LIBDIR) -I$(LIBFTDIR) $(TESTFILE) -L$(LIBDIR) -l:$(BIBNAME) -L$(LIBFTDIR) -lft
	@./$(TESTPROGRAM)

leakfull:	test
	valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./$(TESTPROGRAM)
	
clean: $(OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	$(RF) $(TESTPROGRAM)

.PHONY:
	all test leakfull clean fclean
