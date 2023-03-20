# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/03/20 15:54:36 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SOURCES = main.c stack.c 
INCLUDES = stack.h
LIBFT = libft.a
LIB = ft
LIB_DIR = libft

# **************************************************************************** #

SRCS = $(SOURCES)
OBJS = $(SOURCES:.c=.o)
INCS = $(INCLUDES)
LDLIBS = -l $(LIB)

SRC_DIR = sources
OBJ_DIR = objects

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJS))
INCS := $(addprefix $(SRC_DIR)/, $(INCS))

# **************************************************************************** #

MAKE = make
CC = gcc
AR = ar
RM = rm

CFLAGS = -Wall -Wextra -Werror
ARFLAGS = crus
RMFLAGS = -rf
LDFLAGS = -L $(LIB_DIR)


# Commands ******************************************************************* #

all : $(NAME)
	./$(NAME)

clean :
	$(RM) $(RMFLAGS) */*.o */*.a

fclean : 
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

# Dependency ***************************************************************** #

$(NAME): $(OBJS) $(INCS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -I $(SRC_DIR) -o $(NAME) $(LDFLAGS) $(LDLIBS)

$(LIBFT): 
	make -j3 -C ./libft all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -c -I $(SRC_DIR)  -o $@

# **************************************************************************** #
