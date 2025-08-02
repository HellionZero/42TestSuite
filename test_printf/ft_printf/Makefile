# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 13:42:37 by lsarraci          #+#    #+#              #
#    Updated: 2025/08/01 18:30:15 by lsarraci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

CC = gcc

DEPS = ft_printf.h

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
		ft_putchar.c \

OBJ = $(SRC:.c=.o)

LIBDIR = libft

RF = rm -f

all: $(NAME)
	$(MAKE) -C $(LIBDIR)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
	

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBDIR) clean
	$(RF) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	$(RF) $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
	

