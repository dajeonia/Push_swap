# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/02/24 14:02:13 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE = make

CC = gcc
AR = ar
RM = rm

CFLAGS = -Wall -Wextra -Werror -c
ARFLAGS = crus
RMFLAGS = -rf

OBJ_DIR = objs
SRC_DIR = srcs

SRCS = main.c
OBJS = $(SRCS:.c=.o)
INCLUDES = includes

# **************************************************************************** #

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : 
	$(MAKE) clean
	$(RM) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus

# **************************************************************************** #

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDES)
