# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 11:40:14 by dajeon            #+#    #+#              #
#    Updated: 2023/03/20 17:42:19 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm
AR = ar

CFLAGS = -Wall -Wextra -Werror -I sources
RMFLAGS = -rf
ARFLAGS = crus

SRCS = $(addprefix sources/, ft_putnbr_base.c ft_putnbr_base_u.c \
	   ft_putstr.c ft_putchar.c ft_abs.c ft_printf.c ft_putnbr_base_lu.c)

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
