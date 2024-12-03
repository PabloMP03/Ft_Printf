# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmunoz-p <pmunoz-p@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 11:07:31 by pmunoz-p          #+#    #+#              #
#    Updated: 2024/06/18 16:52:34 by pmunoz-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRCS =	ft_putchar.c \
				ft_printf.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_putchar_fd.c \
				ft_print_ptr.c \
				ft_putnbr.c \
				ft_print_unsigned.c \
				ft_print_hex.c
				
								
OBJS = $(SRCS:.c=.o) 

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all re clean fclean
